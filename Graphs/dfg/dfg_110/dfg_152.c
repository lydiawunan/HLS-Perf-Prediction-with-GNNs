#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 730192382
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned short p_13, char p_19)
{
  long v_17;
  int v_15;
  char v_11;
  unsigned int v_9;
  long v_6;
  char v_4;
  unsigned char v;
  double result;
  v_17 = (long)p;
  v_9 = 369303912U;
  v_6 = (long)p_19;
  v_4 = (char)p_13;
  v = (unsigned char)196;
  v_11 = (char)(373210664LL + (0 / (long long)((int)p + 591) + (long long)(
                               (int)v - (int)p_19)));
  v_15 = ! ((-120 % ((int)p_13 % ((int)p_13 + 691) + 368)) * ! ((int)p_13 + (int)p));
  v = (unsigned char)((unsigned long)v_4 / (((unsigned long)v_6 * 35893UL << (
                                             (unsigned int)p * v_9 & 31U)) + 313UL) - (unsigned long)(! (
                      (long)((int)v_11 + (int)p_13) % (((long)v_15 - v_17) + 771L))));
  result = (double)v;
  return result;
}


