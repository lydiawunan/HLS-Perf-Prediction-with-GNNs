#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 415566631
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, float p_5, short p_7, int p_9[2][3][3],
                  char p_11)
{
  float v_27;
  char v_25;
  unsigned char v_23;
  unsigned int v_21;
  char v_19;
  double v_17;
  unsigned short v_15;
  long v_13;
  float v;
  unsigned long result;
  v_27 = -8759498752.f;
  v_25 = (char)p_7;
  v_23 = (unsigned char)113;
  v_21 = 4294934835U;
  v_19 = (char)0;
  v_17 = (double)p_5;
  v_15 = (unsigned short)p_7;
  v_13 = (long)p_9[1][1][1];
  v = (float)p_11;
  while (((unsigned int)((int)p_7 % 675 & (int)(v + 57.f)) | ((unsigned int)p_7 * v_21 ^ (unsigned int)(
                                                              (int)v_23 & (int)p_7))) != (unsigned int)(
         (int)v_25 / (p_9[1][1][0] + 626))) {
    v_17 = v_27 - 2313507072.f;
    v_25 = (char)(- ((int)((char)v) / ((int)v_19 + 607) - (int)(~ p_11)));
    v_23 = (unsigned char)(((int)(~ p_7) | 39482 % ((int)v_25 + 37)) + (
                           (int)p_7 - (int)v_19));
    v_21 = (unsigned int)(-20098. - v_17);
  }
  while_0_break: ;
  if (! (! (v_13 * (long)v_15)) > (long)((118 / (p_9[1][1][1] + 833) >> (
                                          ((int)v_17 - 552435934) & 31)) << (
                                         (int)(- (~ v_19)) & 31))) {
    v = (float)(! (- (! 4502L)));
    result = (unsigned long)(- v);
    result = ! ((unsigned long)p - result);
  }
  else result = (unsigned long)((int)(41224.f - - p_5) - (int)(- p_7) % (
                                                         p_9[1][0][0] / (
                                                         (int)p_11 + 590) + 103));
  return result;
}


