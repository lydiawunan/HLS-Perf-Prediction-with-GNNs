#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 394698398
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, double p_5, unsigned int p_7,
                 unsigned int p_9, signed char p_11)
{
  unsigned short v_19;
  short v_17;
  unsigned int v_15;
  unsigned short v_13;
  char v;
  unsigned int result;
  v_19 = (unsigned short)28697;
  v_17 = (short)p_5;
  v_15 = (unsigned int)p_11;
  v_13 = (unsigned short)p_5;
  result = (unsigned int)(! (((int)p_11 / -8) / ((int)p % -36786 + 547))) - (
           ((unsigned int)v_13 / (p_7 + 279U)) % (v_15 + 122U) + (unsigned int)(
           ((int)v_17 - -39) % ((int)((unsigned short)-1.97695729333e+38f) % (
                                (int)v_19 + 2) + 996)));
  result = result;
  v = (char)(~ (- p_7 / (p_9 + 975U) & result));
  result = (unsigned int)(~ ((int)v + ((int)p >> 2) % ((231 - (int)((unsigned char)p_5)) + 788)));
  return result;
}


