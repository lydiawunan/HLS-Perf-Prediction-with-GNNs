#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1066397649
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, char p_7, unsigned short p_11, char p_19, unsigned int p_25)
{
  unsigned short v_23;
  long v_21;
  unsigned char v_17;
  int v_15;
  short v_13;
  double v_9;
  unsigned long long v_4;
  int v;
  double result;
  v_17 = (unsigned char)p;
  v_15 = -34945;
  v_13 = (short)p_7;
  v_9 = -1.36602583185e+38;
  v_4 = (unsigned long long)p_7;
  v_21 = (long)(~ p_25 / (unsigned int)(-101 % ((int)v_13 + 850) + 919) + (unsigned int)v_17);
  if ((unsigned long long)-8556872192.f <= ~ ((unsigned long long)((int)p_11 + (int)p_11) + v_4)) {
    v = (int)((v_9 * v_9 - (double)p_11) + (double)((int)v_13 * 183 + (
                                                    v_15 & (int)v_17)));
    v_4 = (unsigned long long)(-35291LL | (long long)(- ((unsigned int)p_7 / 19685U)));
    result = (double)(((unsigned long long)(- v) / (v_4 + 864ULL)) * (unsigned long long)(
                      (p * p) / ((p + p) + 320)));
  }
  else {
    result = (double)-23875L;
    v_23 = (unsigned short)(~ (! (~ 541605050)));
    result = (double)(((unsigned long long)p_19 - ((unsigned long long)v_21 - 340928728ULL)) % (
                      (unsigned long long)((double)v_23 / (result + 125.) + (double)(
                                           p_25 % 93U)) + 562ULL));
  }
  return result;
}


