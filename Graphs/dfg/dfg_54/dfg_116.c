#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 670276565
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned char p_7, short p_15)
{
  unsigned long v_13;
  char v_11;
  unsigned long v_9;
  unsigned long long v_5;
  double v;
  char result;
  v_13 = 547024750UL;
  v_11 = (char)11;
  v_9 = (unsigned long)p_15;
  v = 2.85392927914e+38;
  result = (char)111;
  v_5 = (unsigned long long)(v_13 * (unsigned long)v_11) + 18446744072956984196ULL;
  v_13 = (unsigned long)((unsigned long long)-2915163392.f - ((500914117ULL % (
                                                               v_5 + 27ULL)) * (unsigned long long)(
                                                              v_9 - (unsigned long)v_11) - 
                                                              (v_5 + (unsigned long long)p_15) * (unsigned long long)(
                                                              v_9 + 4294960855UL)));
  v_11 = (char)((unsigned long)result * (174395135UL - (p ^ (unsigned long)p_7)) + 
                (unsigned long)((int)((unsigned char)((double)v_9 + 7.94885915135e+37)) * (int)(! p_7)) / (
                ((p | 4294936479UL) | v_13) + 182UL));
  result = (char)(((unsigned long long)(~ p) % ((unsigned long long)v % (
                                                v_5 + 668ULL) + 985ULL) << (
                   (int)(! (~ p_7)) & 63)) - (unsigned long long)(~ (
                                                                  p / 4294909249UL) + (
                                                                  ! v_9 + (unsigned long)(
                                                                  180 + (int)v_11))));
  return result;
}


