#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 936661847
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p[1][1], unsigned long p_11)
{
  float v_9;
  char v_7;
  signed char v_4;
  char v;
  short result;
  v_9 = -4330055168.f;
  v_7 = (char)99;
  result = (short)17149;
  v_7 = (char)((! p_11 << (! p_11 & 31UL)) * (unsigned long)v_7);
  if (0 <= ((int)p[0][0] / ((int)(~ v_7) + 643)) / ((int)(- v_9) + 289)) {
    v_4 = (signed char)(-988446807 + (int)p[0][0]);
    v = (char)((((int)result + (int)p[0][0]) ^ (int)v_7) / ((int)p[0][0] + 747));
    result = (short)((int)v * (((int)v % ((int)((char)2.62245471452e+38f) + 1017)) / (
                               ((int)v_4 >> 6) + 560)));
  }
  else result = (short)-12267;
  return result;
}


