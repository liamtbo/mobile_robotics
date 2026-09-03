from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'pioneer'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*')),
        (os.path.join('share', package_name, 'saved_maps'), glob('pioneer/saved_maps/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Liam Bouffard',
    maintainer_email='liamtbo@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    # this defines executables, launch files sear
    entry_points={
        'console_scripts': [
                'driver = pioneer.driver:main',
                'mapping = pioneer.mapping:main',
                'savemap = pioneer.savemap:main',
                'path_planning = pioneer.path_planning:main',
                'localization = pioneer.localization:main',
                'world_tf = pioneer.world_tf:main',

        ],
    },
)
