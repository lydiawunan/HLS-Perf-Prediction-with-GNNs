#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 350023503
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned long p_11, unsigned char p_13, char p_15,
        unsigned char p_17)
{
  short v_19;
  signed char v_9;
  float v_6;
  unsigned int v_4;
  double v;
  int result;
  v_19 = (short)p_13;
  v_9 = (signed char)p_13;
  v_6 = 99943344.f;
  result = (int)p;
  result = (int)(- (v_6 * (float)((int)p_15 % ((int)v_9 + 384)))) ^ (
                                                                    (
                                                                    (int)((unsigned char)v_6) - 44) % (
                                                                    (int)p_17 / (
                                                                    result + 987) + 986)) / (
                                                                    (int)(- (- v_19)) + 681);
  v_4 = ((unsigned int)p / 58298U) / (unsigned int)(((int)((v_6 - (float)v_9) / (
                                                           (float)((unsigned long)p % (
                                                                   p_11 + 284UL)) + 900.f)) + 
                                                     (int)p_13 / 20270) + 430);
  v = - (((double)v_6 - p) / ((p + (double)v_9) + 425.) - p);
  result = (int)((unsigned long)result - ((unsigned long)(! (1158L % (
                                                             (long)v + 68L))) & (unsigned long)(~ (- v_4))));
  return result;
}


