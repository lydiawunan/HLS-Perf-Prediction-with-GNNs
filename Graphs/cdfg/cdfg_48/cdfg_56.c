#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 103990787
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, unsigned char p_7, float p_11,
                   unsigned short p_13, char p_15)
{
  short v_9;
  unsigned short v_5;
  long v;
  unsigned short result;
  v_9 = (short)9603;
  v_5 = (unsigned short)30946;
  v = (long)p_15;
  result = (unsigned short)46463;
  v_9 = (short)(v - (long)(- v_9));
  if (! (~ ((int)((char)346.833088462) + (int)p_15)) <= (int)result) {
    v = 48018L;
    result = (unsigned short)(! v);
  }
  else {
    v = (long)((((int)p_7 >> ((int)result & 7)) & ((int)((short)-1458672119.38) - (int)v_9)) % (
               (int)5.28576539e+37 * ((int)((unsigned short)p_11) - (int)p_13) + 144));
    v_5 = (unsigned short)(! ((unsigned long)v / 4294922157UL) * (unsigned long)(~ v_5));
    result = (unsigned short)(((4126318021ULL % (p + 51ULL)) % 3767054590ULL) / (unsigned long long)(
                              (62332 * (int)v_5) % ((int)p_7 + 140) + 760));
  }
  return result;
}


