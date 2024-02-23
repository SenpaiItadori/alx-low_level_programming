#!/usr/bin/python3

"""Defines a class Base."""


class Base:
    """Represent a new class Base."""

    __nb_objects = 0

    def __init__(self, id=None):
        """Initialize the Base class.
        Args:
            id (int): The id of the Base.
        """
        if id != None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
