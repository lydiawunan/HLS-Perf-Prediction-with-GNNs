#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156235410
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, signed char p_7, signed char p_9, char p_11,
         unsigned long p_13)
{
  int v_5;
  unsigned char v;
  long result;
  v_5 = (int)p * ((int)p_11 - (int)p_7);
  v = (unsigned char)(((unsigned long long)(! p_9) % (16410084ULL / (unsigned long long)(
                                                      (int)p_11 + 183) + 947ULL) + (unsigned long long)p_7) / (unsigned long long)(
                      p_13 + 845UL));
  v_5 = (int)(- ((double)p / (((double)(v_5 >> ((int)p_7 & 31)) + (3155580429.43 + (double)p)) + 208.)));
  result = (long)((double)((((int)((unsigned char)p) & (int)v) / (((int)((signed char)614.904913962) - -37) + 116)) % (
                           v_5 + 31)) + - (-1.88401353609e+37 / (double)(
                                           p + 364.f)) / ((double)(! (
                                                          v_5 * 27841)) + 819.));
  return result;
}


