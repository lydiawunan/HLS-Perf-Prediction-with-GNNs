#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 13522733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, signed char p_4, signed char p_7,
         unsigned short p_9, short p_11)
{
  short v_19;
  float v_17;
  double v_15;
  unsigned int v_13;
  unsigned char v;
  long result;
  v_17 = (float)p_7;
  v_15 = (double)p;
  v_13 = (unsigned int)p_9;
  result = (long)p_4;
  v_19 = (short)(-4294935420U);
  v_13 = (unsigned int)((int)(82. - ((v_15 - (double)v_13) + (double)(~ p))) / (
                        (int)((short)((-63979.f + v_17) / ((float)((int)p_11 - (int)p_4) + 170.f))) % (
                        (int)v_19 + 333) + 585));
  v = (unsigned char)(! (((unsigned long)p_9 % 3680872674UL) * (unsigned long)(~ p_11) - 
                         (unsigned long)v_13 / (unsigned long)(result + 355L)));
  result = (long)((p * 107UL | 3268258371UL) * (unsigned long)(~ ((int)p_4 / (
                                                                  (int)v + 183))) >> (
                  - ((unsigned long)p_7 % (620185479UL % (p + 470UL) + 3UL)) & 31UL));
  return result;
}


