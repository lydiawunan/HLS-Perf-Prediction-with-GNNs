#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305276216
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, unsigned long long p_5, unsigned long long p_9, char p_13,
         unsigned int p_15[2][4][3])
{
  long long v_21;
  unsigned int v_19;
  unsigned long v_17;
  unsigned short v_11;
  unsigned int v_7;
  short v;
  char result;
  v_21 = 924947474LL;
  v_19 = (unsigned int)p_9;
  v_17 = (unsigned long)p_15[0][3][1];
  v_7 = (unsigned int)p;
  v = (short)-9886;
  v_11 = (unsigned short)(((long long)((unsigned long)((unsigned int)p_13 ^ p_15[1][2][2]) / (
                                       v_17 / 25UL + 244UL)) * ((long long)v_19 + (
                                                                (long long)v_17 + v_21))) % (long long)(
                          p_15[1][0][1] + 633U));
  result = (char)((unsigned long)(((double)(- p_5) / -1.81644592522e+38) * (double)(! v_7)) & (
                  (unsigned long)(48985 / ((int)v + 210)) + (unsigned long)(
                  (long)(-8421292544.f / ((float)p_9 + 87.f)) % (((long)v_11 + -53036L) + 309L))));
  v = (short)-16045;
  result = (char)((unsigned long long)(((long)(3664847360.f + (float)v) & (
                                        (long)v - p)) % (long)(- ((int)result / (
                                                                  (int)result + 473)) + 350)) * 49953ULL);
  return result;
}


