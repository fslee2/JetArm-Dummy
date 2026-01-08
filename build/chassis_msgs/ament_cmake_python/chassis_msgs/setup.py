from setuptools import find_packages
from setuptools import setup

setup(
    name='chassis_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('chassis_msgs', 'chassis_msgs.*')),
)
