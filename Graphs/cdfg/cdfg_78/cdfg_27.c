#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 85237793
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, char p_5, unsigned long long p_7, unsigned char p_17,
         double p_21[4])
{
  unsigned char v_27;
  signed char v_25;
  unsigned char v_23;
  unsigned int v_19;
  unsigned int v_15;
  unsigned short v_13;
  double v_11;
  unsigned long v_9;
  unsigned short v;
  char result;
  v_27 = (unsigned char)p_21[2];
  v_25 = (signed char)p;
  v_23 = (unsigned char)p_5;
  v_15 = (unsigned int)p_21[3];
  v_13 = (unsigned short)p;
  v_11 = 493.709758668;
  v = (unsigned short)21116;
  while ((unsigned int)p / (v_15 + 127U) == (unsigned int)v) {
    v_27 = (float)v_27 / 2.16558309417e+38f;
    v_13 = (unsigned short)(! ((int)((char)3412258048.f) & (int)(~ p_5)));
    v_11 = (double)(- (- 474.071807861f));
    v = (unsigned short)0;
  }
  while_0_break: ;
  if (p_7 + ((unsigned long long)v_13 & p_7) % (unsigned long long)((
                                                                    49563 ^ (int)p_5) + 21) > (unsigned long long)(
      (int)v_23 % ((int)(~ v_25) + 719))) {
    v_9 = (unsigned long)(~ (- (- (short)-26519)));
    v = (unsigned short)((double)(! (v_9 / 3444326863UL)) + (- v_11 + (double)(
                                                             -115 % (
                                                             (int)v_13 + 417))));
    result = (char)((-9194583778.23 - (double)v / (p + 170.)) / ((double)(
                                                                 ((int)p_5 >> (
                                                                  p_7 & 7ULL)) / 123) + 223.));
  }
  else {
    v_19 = (unsigned int)(- p_5);
    v_15 = (unsigned int)(- ((double)(~ v_19) - - p_21[3]));
    result = (char)(((unsigned long)(171U * v_15) - (unsigned long)p_17 / 8229UL) / 4294967273UL);
  }
  return result;
}


