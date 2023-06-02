# QMK Walkthrough

## Install

Install QMK:

```
brew install qmk/qmk/qmk
```

## Setup

After installing QMK you can set it up with this command:

```
qmk setup
```

In most situations you will want to answer `y` to all of the prompts.

## Validate build environment

Now that your QMK build environment is set up, you can build a firmware for your keyboard. Start by trying to build the keyboard's default keymap:

```
qmk compile -kb ferris/sweep -km default
```

## Customize keymap

Copy the `config.h` and `keymap.c` files into the `~/qmk_firmware/keyboards/ferris/keymaps/bradsimantel` directory (QMK installs at `~/qmk_firmware` by default).

Then compile the `.hex` file:

```
qmk compile -kb ferris/sweep -km bradsimantel
```

## Flash the keyboard

Connect the left half of the Ferris (and only the left half) and run:

```
qmk flash -kb ferris/sweep -km bradsimantel -bl avrdude-split-left
```

You'll then be prompted to put the Ferris in reset mode before the flash happens. Repeat for the right side:

```
qmk flash -kb ferris/sweep -km bradsimantel -bl avrdude-split-right
```
