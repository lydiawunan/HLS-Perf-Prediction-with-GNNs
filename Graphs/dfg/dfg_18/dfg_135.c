#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 432708519
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, long long p_11)
{
  unsigned char v_9;
  unsigned int v_7;
  char v_5;
  long long v;
  long long result;
  v_5 = (char)-26;
  v_9 = (unsigned char)(~ (char)-17);
  v_7 = (unsigned int)(- p_11);
  v = (long long)(! ((unsigned long long)((unsigned long)((int)((char)p) & (int)v_5) & 
                                          3778258747UL / (unsigned long)(
                                          v_7 + 441U)) / (((unsigned long long)p / 529609842ULL - (unsigned long long)(
                                                           (int)v_9 - (int)v_5)) + 290ULL)));
  result = - v;
  return result;
}


