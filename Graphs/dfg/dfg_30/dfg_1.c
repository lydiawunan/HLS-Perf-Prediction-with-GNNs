#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 646950570
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, char p_4, double p_9, unsigned int p_13,
                  unsigned long long p_15)
{
  int v_11;
  int v_7;
  unsigned long long v;
  unsigned char result;
  v_11 = (int)p_13;
  result = (unsigned char)p_15;
  v_7 = (int)(89369ULL / (p_15 + 44ULL));
  v = (unsigned long long)((((int)((unsigned char)((double)v_7 + p_9)) * (int)result) * 19010) / (
                           (int)((double)((unsigned int)-166.534164608 - 
                                          (unsigned int)p_4 / (p_13 + 836U)) * (
                                 - p_9 / 4294955500.)) + 1016));
  v_7 = v_11;
  result = (unsigned char)(((unsigned long long)((int)((char)p) * (int)p_4) + v) % (
                           (unsigned long long)(v_7 % (v_7 * (int)result + 910)) % (
                           - (23574ULL + (unsigned long long)p_9) + 457ULL) + 995ULL));
  return result;
}


