#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 321559889
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p[3][2], signed char p_9, short p_11,
                  unsigned short p_13[5][5][2])
{
  unsigned char v_6;
  long long v_4;
  float v;
  unsigned char result;
  v_6 = (unsigned char)p_9;
  v = 1.22847228654e+38f;
  result = (unsigned char)((int)p_11 ^ ~ (71 % (-888405840 / ((int)p_13[1][4][0] + 924) + 879)));
  v_4 = (long long)((unsigned long)v_6 % ((unsigned long)(p[0][1] * (double)p_9) + 741UL) ^ (unsigned long)(
                    ~ ((int)p_9 / 247) % 45));
  result = (unsigned char)((long long)(- v + (float)((int)(- result) % (
                                                     ((int)((char)-521.565319804) - -54) + 829))) + v_4);
  result = (unsigned char)(1.06385406406e+38f * (float)((unsigned int)(
                                                        4711 & (int)result * -1044132627) % (
                                                        (4294926891U - (unsigned int)(- v)) + 278U)));
  return result;
}


