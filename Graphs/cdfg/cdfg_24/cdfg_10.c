#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 160075907
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p, signed char p_7[3])
{
  unsigned int v_15;
  char v_13;
  unsigned long v_11;
  unsigned long v_9;
  long long v_5;
  unsigned char v;
  float result;
  v_15 = 682453299U;
  v_11 = 3600722538UL;
  v_9 = (unsigned long)p_7[2];
  v_5 = (long long)p;
  v = (unsigned char)124;
  result = (float)p;
  v_13 = (char)p_7[0];
  if ((unsigned long)v_13 - (((unsigned long)result & v_11) + 3235788827UL) < (unsigned long)v_15) {
    v_5 = (long long)((unsigned long long)((unsigned long)((float)v_5 * result) - (
                                           (unsigned long)p_7[0] + v_9)) - (
                      (unsigned long long)(914485993UL / (v_11 + 417UL)) - (
                      (unsigned long long)v_13 - 18446744073709536035ULL)));
    v = (unsigned char)((-20476LL + ((long long)p - v_5)) % (long long)(
                        (int)v + 36));
    result = (float)(- (~ (29620 + (int)v)));
  }
  else result = (float)(-(unsigned short)5272);
  return result;
}


