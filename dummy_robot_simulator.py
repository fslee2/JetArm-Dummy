#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
DummyRobot Simulator
===================

This module provides a virtual DummyRobot follower arm to allow verification
of teleop_bridge.py without actual hardware.

It mimics the object hierarchy returned by the `fibre` library:
- ref_unit.axis<N>.controller.pos_setpoint
- ref_unit.axis<N>.requested_state

Each time a new `pos_setpoint` is assigned, it is logged to the internal state
and printed to the console for debugging purposes.
"""

import time

class _DummyController:
    """Simulates the 'axis.controller' object, primarily to catch setpoints."""
    def __init__(self, axis_id: int):
        self._axis_id = axis_id
        self._pos_setpoint = 0

    @property
    def pos_setpoint(self) -> int:
        return self._pos_setpoint

    @pos_setpoint.setter
    def pos_setpoint(self, value: int):
        self._pos_setpoint = int(value)
        # In a real simulation, you might use this value. Here, we just print it.
        # This is the core of our simulation feedback.
        # print(f"[SIM] Follower J{self._axis_id} received pos_setpoint: {value}")

class _DummyAxis:
    """Simulates a fibre Axis object, exposing a controller and state."""
    def __init__(self, axis_id: int):
        self.controller = _DummyController(axis_id)
        self._requested_state = 1 # Corresponds to AXIS_STATE_IDLE

    @property
    def requested_state(self) -> int:
        return self._requested_state

    @requested_state.setter
    def requested_state(self, state: int):
        self._requested_state = int(state)
        state_str = 'IDLE' if state == 1 else str(state)
        # print(f"[SIM] Follower J{self._axis_id} received requested_state: {state_str}")

class DummyFollowerDevice:
    """The top-level simulated device, mimicking the object returned by ref_tool.find_any()."""
    def __init__(self):
        # Create 6 axes, named axis0 through axis5, corresponding to J1-J6
        for i in range(6):
            setattr(self, f'axis{i}', _DummyAxis(axis_id=i + 1))

def find_any(*args, **kwargs):
    """A mock version of the real ref_tool.find_any() function."""
    print("[INFO] Simulation mode active. Returning a virtual follower arm.")
    return DummyFollowerDevice()
