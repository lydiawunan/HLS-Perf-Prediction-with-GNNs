#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 404634833
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, double p_5, long p_7, unsigned short p_9, float p_13)
{
  char v_19;
  int v_17;
  long v_15;
  long v_11;
  unsigned long v;
  char result;
  v_19 = (char)70;
  v_17 = (int)p_7;
  v = (unsigned long)p_7;
  v_15 = 16698L;
  v_11 = (long)((float)((int)((char)(p_13 * (float)(~ v))) % ((int)v_19 + 469)) + - (
                (p_13 + p_13) / ((float)p_7 + 838.f)));
  v = (unsigned long)(! (- (v_15 * (v_11 / (long)(v_17 + 445)))));
  result = (char)((unsigned long)((double)(! (v % (unsigned long)((int)p + 456))) - - (
                                  p_5 / -15704.)) | ((unsigned long)(- p_7) * ! v & (unsigned long)(
                                                     (long)p_9 * v_11 + (
                                                     (long)p_13 - v_11))));
  return result;
}


