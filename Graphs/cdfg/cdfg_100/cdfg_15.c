#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 458458198
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, unsigned long p_15, char p_19)
{
  unsigned int v_21;
  unsigned int v_17;
  unsigned long long v_13;
  short v_11;
  char v_8;
  unsigned long v_6;
  int v_4;
  double v;
  float result;
  v_21 = (unsigned int)p;
  v_17 = 61821U;
  v_13 = (unsigned long long)p_15;
  v_11 = (short)28450;
  v_8 = (char)-115;
  v_6 = (unsigned long)p_19;
  v_4 = (int)p_19;
  v = (double)p;
  result = (float)p;
  if ((int)((unsigned char)(-698.710021973f / ((float)((v_13 << (v_17 & 63U)) % (unsigned long long)(
                                                       ~ p_15 + 743UL)) + 109.f))) < 93) {
    v_13 = (unsigned long long)((unsigned int)(0 / ((int)p_19 + 147)) * ! (
                                (unsigned int)v_4 - 671706988U));
    result = (float)p;
    v = (double)(~ ((unsigned long long)p_15 * 23206ULL));
  }
  else {
    v_11 = (short)(! (15855U - ! v_21));
    v_13 = (unsigned long long)(- (- ((int)p - (int)((char)v))));
    v_4 = (int)-210.922912598f;
  }
  while ((- v + (double)((int)result / (v_4 + 892))) / ((double)(- (v_6 * (unsigned long)v_8)) + 951.) < (double)p) {
    v_17 = (int)v_11 + (int)((short)-9945522439.49);
    v_6 = (unsigned long)((unsigned int)(6.98286651492e+37 + (double)p_15) / (
                          v_17 + 772U));
    result = (float)((58474ULL - ((unsigned long long)p & v_13)) % 85ULL);
    v = (double)(- p);
  }
  while_0_break: ;
  return result;
}


