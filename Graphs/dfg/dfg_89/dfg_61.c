#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1050017158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, short p_7, unsigned char p_9, short p_11,
        unsigned short p_17)
{
  unsigned char v_15;
  signed char v_13;
  char v_5;
  signed char v;
  int result;
  v_15 = (unsigned char)36;
  v_13 = (signed char)p_17;
  result = (int)p_7;
  v = (signed char)(- (! ((int)v_15 + 857102064) + (int)p_17));
  v_5 = (char)((int)p_11 | (int)v_13);
  v_5 = (char)(((943946013LL * (long long)p_7) % (long long)(((int)p_9 - (int)p_7) + 663) >> (
                (result + (int)p_9) * (int)p_11 & 63)) / (long long)(
               ((int)v_5 - -39) + 188));
  result = (int)((unsigned long)(((long)((int)v * (int)p) % 69382893L) / (long)(
                                 (int)(~ (~ v_5)) + 192)) | ~ (4294926156UL >> 17) / 37UL);
  return result;
}


