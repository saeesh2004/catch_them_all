from setuptools import find_packages, setup

package_name = 'my_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='saeesh',
    maintainer_email='saeesh@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
          "py_node = my_py_pkg.my_first_node:main",
          "robo_news = my_py_pkg.robot_news_station:main",
          "smartphone = my_py_pkg.smartphone:main",
          "activity_pub = my_py_pkg.activity_pub:main",
          "activity_sub = my_py_pkg.activity_sub:main",
          "add_two_numbers_srv = my_py_pkg.add_two_numbers_srv:main",
          "add_two_numbers_cli = my_py_pkg.add_two_numbers_cli:main",
          "add_two_numbers_cli_oop = my_py_pkg.add_two_numbers_cli_oop:main",
          "activity3_subscriber = my_py_pkg.activity3_subscriber:main",
          "hw_status_publisher = my_py_pkg.hw_status_publisher:main",
          "led_panel = my_py_pkg.led_panel:main",
          "bettery = my_py_pkg.bettery:main"
           


        ],
    },
)
