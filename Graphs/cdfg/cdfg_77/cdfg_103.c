#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 421226700
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p[1][4][1], int p_4, unsigned long long p_7,
                  unsigned int p_9, short p_11)
{
  long long v_19;
  unsigned short v_17;
  unsigned int v_15;
  unsigned int v_13;
  float v;
  unsigned char result;
  v_19 = (long long)p[0][1][0];
  v_15 = 360843326U;
  v = (float)p_7;
  if (0ULL <= ((708713712ULL % ((unsigned long long)p[0][0][0] + 130ULL)) / (unsigned long long)(
               (int)(- p_11) + 522)) * (unsigned long long)v_19) {
    v_13 = (unsigned int)(~ 897173009UL);
    v = (float)((long long)((unsigned int)(1.93987227643e+37f * v) & v_13) + (
                (long long)(v_15 * v_15) & -621228692LL));
    v = - ((v + (float)p_11) * 1.84467440737e+19f);
  }
  else {
    v_17 = (unsigned short)p_9;
    v = (float)(- (4294961545U + p_9) / (unsigned int)((int)(~ v_17) + 159));
  }
  result = (unsigned char)((unsigned long long)((int)(- p[0][0][0]) % (
                                                - p_4 + 22)) - (((unsigned long long)v - p_7) & (unsigned long long)(
                                                                p_9 % (
                                                                (unsigned int)-1.68593006853e+38f + 382U))));
  return result;
}


