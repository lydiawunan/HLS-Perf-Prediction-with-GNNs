#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783703856
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p)
{
  unsigned long v_15;
  unsigned char v_13;
  unsigned char v_11;
  unsigned short v_9;
  double v_7;
  int v_5;
  char v;
  unsigned char result;
  v_15 = 755636279UL;
  v_13 = (unsigned char)p;
  v_11 = (unsigned char)p;
  v_9 = (unsigned short)p;
  v_7 = 2.26891716754e+37;
  v_5 = (int)p;
  v = (char)103;
  result = (unsigned char)p;
  while ((unsigned int)(! ((int)v_11 / (v_5 + 911)) + (int)v_7) != (unsigned int)(! p) / (
                                                                   (unsigned int)result * 384365811U + 993U) << (
                                                                   (int)p & 31)) {
    v_5 = (float)v_15 * ((float)v_13 - 1.2636630785e+38f);
    v_13 = (unsigned char)((int)(- result) - ((int)(~ p) + -238));
    result = (unsigned char)((((unsigned long long)p + 18446744073709540289ULL) - 18446744072851587470ULL) ^ (unsigned long long)(- (
                             (int)v_9 + (int)v_13)));
    v_11 = (unsigned char)244;
  }
  while_0_break: ;
  while (62673 % ((int)(~ p) / ((int)(! p) + 744) + 632) <= (int)(~ (~ v))) {
    v_9 = v_7 / 1.84467440737e+19;
    result = (unsigned char)(((unsigned long)v_9 - 32845UL) % (unsigned long)(
                             ! v_5 + 975) ^ (unsigned long)p);
    v_5 = (int)p;
    v = (char)(! (724926996ULL * (unsigned long long)((int)((char)8.69532999595e+37) * (int)p)));
  }
  while_0_break_0: ;
  return result;
}


