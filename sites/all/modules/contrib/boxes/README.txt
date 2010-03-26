;$Id: README.txt,v 1.2 2010/03/17 16:04:29 alexb Exp $

# Boxes

Boxes module is a reimplementation of the custom blocks (boxes) that the core
block module provides. It is a proof of concept for what a re-worked block
module could do.

The module assumes that custom blocks are configuration, and not content. This
means that it is a reasonable action to ask for all blocks at one time, this is
in fact exactly what the core block module does.

Boxes provides an inline interface for editing blocks, allowing you to change
the contents of blocks without going to an admin page.

## Chaos tools support

Boxes provides exportables for it's blocks via the (required) Chaos tools[1]
module. This allows modules to provide blocks in code that can be overwritten
in the UI.

Chaos tools is required to use Boxes.

## Spaces support

Boxes provides a Spaces[2] controller class that allows individual spaces to
override a particular block, or even define a completely new block for a
specific space.

Spaces is not required by boxes.

## Todo

* Boxes need language awareness.
* The inline editing experience could be nicer.


[1] http://drupal.org/project/ctools
[2] http://drupal.org/project/spaces
