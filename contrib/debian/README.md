
Debian
====================
This directory contains files used to package offense_coind/offense_coin-qt
for Debian-based Linux systems. If you compile offense_coind/offense_coin-qt yourself, there are some useful files here.

## offense_coin: URI support ##


offense_coin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install offense_coin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your offense_coin-qt binary to `/usr/bin`
and the `../../share/pixmaps/offense_coin128.png` to `/usr/share/pixmaps`

offense_coin-qt.protocol (KDE)

