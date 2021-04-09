# tree-sitter-prolog

![Main Build](https://travis-ci.com/Rukiza/tree-sitter-prolog.svg?branch=main)

## How to use

To include in your project.

> npm install --save tree-sitter-prolog

## How to run

* Clone git
* Install dependencies
  > npm install

  > npm install -g node-gyp

* Build
  > npm run build

* Run
  > tree-sitter generate

  > tree-sitter parse examples/example1.pl

  > tree-sitter test

  > npm test

## ToDo

* Implement CHR parsing.
* Better match ISO
* Add floats
* Add context to some operators e.g =.. is Var =.. List and is.

## When using in Atom apps.

Ensure that you have the latest version of tree-sitter-prolog as
**"tree-sitter-cli": "^0.15.3"** is required.
