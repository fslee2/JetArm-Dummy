示教转换角度模式：
 python3 /home/liyq/hi_ws/leader_arm_teach_angles.py --device /dev/ttyUSB2 --display-only

清除串口缓存：
./cleanup_serial_port.sh /dev/ttyUSB2

记录轨迹：
python3 /home/liyq/hi_ws/leader_arm_mode.py --device /dev/ttyUSB2 --csv /home/liyq/hi_ws/arm_log.csv

示教加运动位置
python3 /home/liyq/hi_ws/leader_arm_teach_angles.py --device /dev/ttyUSB2 --no-write
可以到达位置
python3 /home/liyq/hi_ws/leader_arm_teach_angles.py --device /dev/ttyUSB2

┌─ JetArm-主臂 / Dummy-从臂 运行指令速查 ─────────────────────────┐
│ ① 仅查看主臂实时角度（示教拖动 + 清爽输出）                   │
│    python3 show_leader_angles.py --device /dev/ttyUSB2         │
│                                                                 │
│ ② 主-从映射 + Home/Rest/示教 切换                               │
│    python3 leader_arm_teach_angles.py --device /dev/ttyUSB2     │
│      h → 主臂上电并移到 Home  (0,-90,0,0,0)                     │
│      r → 主臂上电并移到 Rest  (0,-73,180,0,0)                   │
│      c → 主臂掉电，进入虚拟柔顺示教                             │
│      q → 退出                                                   │
│                                                                 │
│ ③ 清理 Linux 串口缓存脚本                                      │
│    ./cleanup_serial_port.sh /dev/ttyUSB2                       │
└──────────────────────────────────────────────────────────────────┘
使用说明
1. 所有示例默认串口为 /dev/ttyUSB2，如有变化请自行替换。
2. JetArm 主臂舵机 ID 为 [1-5]；示教脚本中 Leader J4 → Follower J5，Leader J5 → Follower J6。
3. Home/Rest 角度定义在 follower_arm_config.py，可随时修改并重启脚本生效。
4. `--no-write` 参数可用于关闭 CSV 记录（leader_arm_teach_angles.py旧选项保持兼容）。
5. 所有脚本均在“虚拟柔顺”模式下安全示教；若舵机不上电请先检查 7-12 V 独立电源及 GND 共地。