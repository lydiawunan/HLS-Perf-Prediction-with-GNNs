#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1043002699
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, int p_13, signed char p_15, signed char p_23)
{
  short v_21;
  double v_19;
  char v_17;
  signed char v_11;
  int v_9;
  unsigned int v_6;
  unsigned long v_4;
  short v;
  char result;
  v_21 = (short)-15029;
  v_19 = 2.41314043432e+38;
  v_17 = (char)-6;
  v_11 = (signed char)-12;
  v_9 = -372446698;
  v = (short)p;
  result = (char)p;
  if (((int)(! p_15) + ((int)result + (int)v_21)) + ((int)v % ((int)p_15 + 924)) / (
                                                    -4757 % (p_13 + 583) + 899) == 
      (int)p_15 - ~ ((int)p_23 / ((int)p_15 + 210))) {
    v_6 = (unsigned int)((int)v_11 / (p_13 % 97 + 257) + (int)(- p_15) % -988728756);
    v_9 = v_9;
    v_4 = (unsigned long)v_9;
  }
  else {
    v = (short)(! p);
    v_4 = (unsigned long)(! (-(unsigned short)2849));
    v_6 = (unsigned int)(! ((int)(~ v_17) * ((int)v_17 - (int)((char)v_19))));
  }
  result = (char)(((unsigned long)v * v_4 & (unsigned long)v_6) - (unsigned long)p);
  return result;
}


