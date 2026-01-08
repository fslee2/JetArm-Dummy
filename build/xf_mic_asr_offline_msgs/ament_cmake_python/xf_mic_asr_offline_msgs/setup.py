from setuptools import find_packages
from setuptools import setup

setup(
    name='xf_mic_asr_offline_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('xf_mic_asr_offline_msgs', 'xf_mic_asr_offline_msgs.*')),
)
