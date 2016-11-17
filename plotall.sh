#!/bin/bash

python plot2L.py mergingNewcode test;
python plot3L.py mergingNewcode test;

python 2Dplot2L.py mergingNewcode test;
python 2Dplot3L.py mergingNewcode test;

python Zplot2L.py mergingNewcode test;
python Z2Dplot2L.py mergingNewcode test;

exit 0
