from setuptools import find_packages
from setuptools import setup

setup(
    name='mypalletizer_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('mypalletizer_interfaces', 'mypalletizer_interfaces.*')),
)
