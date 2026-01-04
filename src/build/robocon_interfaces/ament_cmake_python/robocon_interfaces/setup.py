from setuptools import find_packages
from setuptools import setup

setup(
    name='robocon_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('robocon_interfaces', 'robocon_interfaces.*')),
)
