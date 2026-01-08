from setuptools import find_packages
from setuptools import setup

setup(
    name='large_models_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('large_models_msgs', 'large_models_msgs.*')),
)
