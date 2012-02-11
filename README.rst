Bowie
=====

The goal for this project is to create a simple ReStructuredText editor for Mac OSX. It will provide a text pane for writing ReST and then a preview pane where you can see what it will look like rendered.

I'm working on this as I have some free hours, so don't expect a lot of progress very fast. Feel free to contribute to make it go faster.

Goal
----
I would like to build a simple desktop app that I can use to markup some documents in ReStructuredText and see what they look like rendered, and save them to a file. Nothing really fancy, basically an offline native OSX app equal to http://rst.ninjs.org/

Ideas
-----
This blog post does something very similar, but is a little old and lacking some features I want. It shows how you can call the rst2html python lib from objective c. This isn't the best way, but since I couldn't find a ReST lib for c, this will be the best way to get started.

http://artificialcode.blogspot.com/2009/03/cocoa-restless-restructured-preview.html

Features
--------

My goal is to provide the following features.

- A set of canned CSS files you can use when previewing.
- Custom CSS so that you can add your own CSS file to help with rendering
- export rendered HTML

Status
------

- [02/11/2012] 0.1 very rough initial checkin, project was created and window was built. Able to open and save files. Doesn't do any rendering yet.