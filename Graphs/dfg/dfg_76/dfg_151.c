#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305925232
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, double p_17)
{
  unsigned long long v_15;
  unsigned long v_13;
  unsigned long long v_11;
  long long v_9;
  long long v_7;
  float v_5;
  char v;
  char result;
  v_15 = 18446744072744996213ULL;
  v_13 = 41343UL;
  v_7 = 51920LL;
  v_5 = (float)p;
  result = (char)-127;
  v_11 = - ((780827626ULL / (18446744073709551613ULL % (v_15 + 152ULL) + 917ULL)) / (
            (unsigned long long)(- p_17) + 463ULL));
  v_9 = (long long)(v_11 - ~ (v_11 % (unsigned long long)(v_13 + 772UL)) / (unsigned long long)(
                           0 % (28504 * (int)result + 446) + 751));
  v = (char)(70LL - (4294953890LL + (v_7 - (221LL - v_9))));
  result = (char)(((int)(- p) / (((int)v + (int)((char)v_5)) + 658) >> (
                   (719878638L + (long)((int)p - 963)) & 31L)) ^ 6794);
  return result;
}


