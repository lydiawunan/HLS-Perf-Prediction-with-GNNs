#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 363247882
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p[2], float p_7, long long p_13)
{
  char v_15;
  unsigned short v_11;
  double v_9;
  char v_5;
  unsigned int v;
  unsigned char result;
  v_15 = (char)p_7;
  v_11 = (unsigned short)59612;
  v_9 = 9270783347.15;
  v_5 = (char)((int)-2710169944.1 / ((937467199 + (int)v_15) + 659));
  v_5 = (char)((long long)((int)((unsigned short)(((double)p_7 / (v_9 + 304.)) / (
                                                  (double)((unsigned int)v_5 / 4294944649U) + 684.))) + (int)v_11) - ! (
               (long long)((int)v_5 % 81) - - p_13));
  v = (unsigned int)(- (p[1] / ((long long)p_7 + 570LL)));
  result = (unsigned char)(((long long)(v ^ 55U) + (57613LL | p[1])) % 279LL >> (
                           (int)(- (~ v_5)) & 63));
  return result;
}


