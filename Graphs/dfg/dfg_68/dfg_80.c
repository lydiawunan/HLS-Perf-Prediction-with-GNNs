#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 289421450
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, double p_9, long p_11, unsigned long long p_13,
                  char p_15)
{
  char v_17;
  unsigned long v_7;
  unsigned int v_4;
  unsigned char v;
  unsigned char result;
  v_17 = (char)p;
  v_7 = (unsigned long)p_15;
  v_4 = 57198U;
  result = (unsigned char)p_13;
  v_4 = (unsigned int)((unsigned long)p_15 % (v_7 + 899UL));
  v_7 = (unsigned long)(((! p_13 - (unsigned long long)((int)p_15 << (
                                                        (int)result & 7))) / (
                         (unsigned long long)(- p) + 860ULL)) / (unsigned long long)(
                        (int)(! (- v_17)) % ((int)((char)-3774432344.08) + 541) + 653));
  v = (unsigned char)p_11;
  result = (unsigned char)((unsigned long)(! result) * ((unsigned long)(
                                                        ((unsigned int)v % (
                                                         v_4 + 151U)) * (unsigned int)(
                                                        -237362403. - p)) / (
                                                        (- v_7 >> ((unsigned long)(
                                                                   -856.694885254 / (
                                                                   p_9 + 659.)) & 31UL)) + 735UL)));
  return result;
}


