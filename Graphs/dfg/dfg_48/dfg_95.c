#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 52307276
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, int p_5, char p_13)
{
  short v_19;
  char v_17;
  unsigned long long v_15;
  double v_11;
  unsigned char v_9;
  signed char v_7;
  double v;
  double result;
  v_19 = (short)p;
  v_17 = (char)117;
  v_11 = (double)p;
  v_7 = (signed char)p_5;
  v = -371.699490348;
  v_15 = (unsigned long long)((unsigned long)((unsigned int)v_17 / ((
                                                                    1U + 
                                                                    4294912649U * (unsigned int)v_19) + 575U)) + 56921UL);
  v_9 = (unsigned char)(~ ((unsigned long long)(252 + (int)((unsigned char)(
                                                v_11 / (v + 122.)))) | (
                           (unsigned long long)p_13 - v_15)));
  v = (double)(71510063ULL + (unsigned long long)((int)v_7 + (int)((signed char)(
                                                  (float)(p % ((int)v_9 + 1015)) - 8044665344.f))));
  result = (double)(- ((int)v & (p - -94) * (p_5 * 110)));
  return result;
}


