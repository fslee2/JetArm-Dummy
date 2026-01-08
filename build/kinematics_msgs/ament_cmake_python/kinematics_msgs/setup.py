from setuptools import find_packages
from setuptools import setup

setup(
    name='kinematics_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('kinematics_msgs', 'kinematics_msgs.*')),
)
