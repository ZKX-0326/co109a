# 第一章 前六題
## Not
* code

    // This file is part of www.nand2tetris.org
    // and the book "The Elements of Computing Systems"
    // by Nisan and Schocken, MIT Press.
    // File name: projects/01/Not.hdl

    /**
    * Not gate:
    * out = not in
    **/

    CHIP Not {
        IN in;
        OUT out;

        PARTS:
        // Put your code here:
        Nand(a=in, b=in, out=out);
    }

* picture
![Not](https://github.com/ZKX-0326/co109a/blob/master/HW/picture/IMG_20201004_231504_0.jpg)

## And
* code

    // This file is part of www.nand2tetris.org
    // and the book "The Elements of Computing Systems"
    // by Nisan and Schocken, MIT Press.
    // File name: projects/01/And.hdl

    /**
    * And gate: 
    * out = 1 if (a == 1 and b == 1)
    *       0 otherwise
    **/

    CHIP And {
        IN a, b;
        OUT out;

        PARTS:
        // Put your code here:
        Nand(a=a,b=b,out=AnandB);
        Not(in=AnandB,out=out);
    }

* picture
![And](https://github.com/ZKX-0326/co109a/blob/master/HW/picture/IMG_20201004_231509_1.jpg)

## Or
* code

    // This file is part of www.nand2tetris.org
    // and the book "The Elements of Computing Systems"
    // by Nisan and Schocken, MIT Press.
    // File name: projects/01/Or.hdl

    /**
    * Or gate:
    * out = 1 if (a == 1 or b == 1)
    *       0 otherwise
    **/

    CHIP Or {
        IN a, b;
        OUT out;

        PARTS:
        // Put your code here:
        Not(in=a,out=na);
        Not(in=b,out=nb);
        Nand(a=na,b=nb,out=out);
    }

* picture
![Or](https://github.com/ZKX-0326/co109a/blob/master/HW/picture/IMG_20201004_231520_2.jpg)

## Xor
* code

    // This file is part of www.nand2tetris.org
    // and the book "The Elements of Computing Systems"
    // by Nisan and Schocken, MIT Press.
    // File name: projects/01/Xor.hdl

    /**
    * Exclusive-or gate:
    * out = not (a == b)
    **/

    CHIP Xor {
        IN a, b;
        OUT out;

        PARTS:
        // Put your code here:
        Nand(a=a,b=b,out=AnandB);
        Nand(a=a,b=AnandB,out=X);
        Nand(a=b,b=AnandB,out=Y);
        Nand(a=X,b=Y,out=out);
    }

* picture
![Xor](https://github.com/ZKX-0326/co109a/blob/master/HW/picture/IMG_20201004_231535_3.jpg)

## Mux
* code

    // This file is part of www.nand2tetris.org
    // and the book "The Elements of Computing Systems"
    // by Nisan and Schocken, MIT Press.
    // File name: projects/01/Mux.hdl

    /** 
    * Multiplexor:
    * out = a if sel == 0
    *       b otherwise
    **/

    CHIP Mux {
        IN a, b, sel;
        OUT out;

        PARTS:
        // Put your code here:
        Not(in=sel,out=ns);
        Nand(a=a,b=ns,out=X);
        Nand(a=sel,b=b,out=Y);
        Nand(a=X,b=Y,out=out);
    }

* picture
![Mux](https://github.com/ZKX-0326/co109a/blob/master/HW/picture/IMG_20201004_231618_4.jpg)

## DMux
* code

    // This file is part of www.nand2tetris.org
    // and the book "The Elements of Computing Systems"
    // by Nisan and Schocken, MIT Press.
    // File name: projects/01/DMux.hdl

    /**
    * Demultiplexor:
    * {a, b} = {in, 0} if sel == 0
    *          {0, in} if sel == 1
    **/

    CHIP DMux {
        IN in, sel;
        OUT a, b;

        PARTS:
        // Put your code here:
        Not(in=sel,out=ns);
        And(a=in,b=ns,out=a);
        And(a=in,b=sel,out=b);
    }

* picture
![DMux](https://github.com/ZKX-0326/co109a/blob/master/HW/picture/IMG_20201004_231624_5.jpg)