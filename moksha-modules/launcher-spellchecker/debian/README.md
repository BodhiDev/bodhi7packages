moksha-module-spellchecker for Debian
------------------------------------
[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donate_SM.gif)](https://www.paypal.com/paypalme/rbtylee)

# Launcher Spell checker

This is a plugin for [Moksha's](https://github.com/JeffHoogland/moksha) Quick Launcher to check the spelling of words using aspell as a backend.

It is a resurrection of the old e17 [*everything-aspell module*](https://git.enlightenment.org/legacy/subversion-history.git/tree/trunk/E-MODULES-EXTRA/everything-aspell) *with only minor [Bodhi](https://www.bodhilinux.com/) specific changes*. With enough demand, support and time willing I plan on taking over maintaining this module as it is currently unmaintained but rather cool.


<p align="center">
  <img src="https://i.imgur.com/WSQErOl.png" alt="Screen Shot">
</p>

# Dependencies

* The usual build tools, autopoint libtool intltool pkg-config  autotools-dev
* [EFL](https://www.enlightenment.org/download)
* [Moksha](https://github.com/JeffHoogland/moksha)
* [aspell](http://aspell.net/)
* aspell-en (optional)

**Note:** 
>The default aspell dictinary is english (aspell-en). You can, of course, use other dictionaries with this module.
>However before they are available you need to change the dictionary in the module settings. You must have at least one dictionary installed to use the spell checking functionality.

# Usage

*Coming Soon*

# Installation

It is recommended Bodhi users install from Bodhi's repo:

```ShellSession
sudo apt update
sudo apt install moksha-module-spellcheck
```

Other users need to compile the code:

First install all the needed dependencies. Note this includes not only EFL but the EFL header files as well as the [e_dbus](https://git.enlightenment.org/legacy/e_dbus.git/) header files. If you have compiled and installed EFL, edbus and Moksha from source code this should be no problem. 

Then the usual:

```ShellSession
./autogen.sh
make
sudo make install
```

# Support This Project

*Coming soon*

# Credits

Full credit for the orginal code of this module go the enlightenment developers:
* Gustavo Barbieri
* Hannes Janetzek

and any others than may have committed on this module.

<p align="center">
  <i>I Stand on the shoulders of giants.</a>
</p>



 -- Robert <Jeff Hoogland <jeffhoogland@gmail.com>>  Mon, 28 Jan 2019 04:37:13 -0500

