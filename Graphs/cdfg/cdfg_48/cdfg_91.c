#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 430433040
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(float p, unsigned long p_9, unsigned int p_13, float p_15[3][4][5],
          unsigned int p_17)
{
  unsigned int v_11;
  unsigned int v_7;
  unsigned char v_5;
  unsigned short v;
  short result;
  v_11 = (unsigned int)p;
  v_5 = (unsigned char)143;
  v = (unsigned short)25940;
  result = (short)-25392;
  v_7 = ! p_17;
  if ((- v_11 - ~ p_13) + - (v_7 / ((unsigned int)p_15[0][1][3] + 742U)) <= (unsigned int)(
      - ((int)((unsigned short)p_15[2][0][3]) - (int)v) >> (11456ULL % (unsigned long long)(
                                                            (4294919288UL | (unsigned long)result) + 440UL) & 31ULL))) {
    v = (unsigned short)((unsigned int)((int)v_5 + (int)(! result)) % (
                         v_7 / 818U + 540U));
    result = (short)((float)((long long)(~ v) + -587539387LL) - p);
    result = result;
  }
  else result = (short)p_9;
  return result;
}


