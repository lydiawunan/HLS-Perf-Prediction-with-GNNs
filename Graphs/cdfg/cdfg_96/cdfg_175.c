#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 328524146
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, long p_5, short p_13, signed char p_19, short p_21)
{
  unsigned long v_23;
  unsigned long v_17;
  unsigned long long v_15;
  unsigned short v_11;
  float v_9;
  int v_7;
  int v;
  float result;
  v_23 = 363956757UL;
  v_17 = (unsigned long)p_13;
  v_11 = (unsigned short)37313;
  v_9 = -719.02722168f;
  v_7 = -736446935;
  v = (int)p_21;
  result = (float)p_5;
  if (1L >= (long)(result * (float)(- p))) {
    v_11 = (unsigned short)(result - (result + (float)v_7));
    result = (float)((long)((-6386342222.7 / ((double)v_23 + 789.)) * (double)(
                            4204267523UL & (unsigned long)p_21)) * ((long)p_13 * 1002020112L));
    v_9 = result;
  }
  else {
    v_7 = (int)v_17;
    v_17 = (unsigned long)((unsigned long long)(- v_23) / 3909651559ULL - (unsigned long long)(
                           46433 % ((int)(- v_11) + 718)));
    v_11 = (unsigned short)((unsigned long long)(v % ((int)p_21 + 503) + (
                                                 v_7 - v_7)) + ((unsigned long long)p_13 | 18446744073141999004ULL) % (unsigned long long)(
                                                               (int)((short)-3873041152.f) / (
                                                               (int)p_13 + 983) + 235));
  }
  while ((long long)(7137 * ((v % ((int)p + 381)) * (int)((float)p_5 + 6395116032.f))) > 
         -704503565LL + (long long)(~ ((unsigned int)v_7 + 59690U))) {
    v = (float)v_11 * (v_9 * -4076256768.f);
    v_11 = (unsigned short)((int)p + ((int)p % ((int)p_19 + 890)) * (
                                     (int)p_21 | (int)p_21));
    v_15 = (unsigned long long)((v_17 % (unsigned long)((int)p_19 + 239)) % (unsigned long)(
                                v_7 * 47 + 891) - (unsigned long)v);
    v_7 = (int)(~ ((unsigned long long)(3573581158UL + (unsigned long)p_13) / (
                   - v_15 + 583ULL)));
  }
  while_0_break: ;
  return result;
}


