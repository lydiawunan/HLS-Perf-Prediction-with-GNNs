#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 205669029
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, unsigned short p_19)
{
  unsigned char v_21;
  unsigned int v_17;
  double v_14;
  unsigned char v_12;
  double v_10;
  float v_8;
  short v_6;
  short v_4;
  float v;
  unsigned short result;
  v_21 = (unsigned char)p_19;
  v_17 = 417146411U;
  v_14 = (double)p_19;
  v_8 = -7.98360668949e+37f;
  v_6 = (short)-30452;
  v_10 = (double)((int)(~ p_19) % ((int)(- (! v_21)) + 398));
  if ((unsigned int)p % ((4200714623U / (v_17 + 450U)) % (unsigned int)(
                         (int)(! p_19) + 80) + 791U) == 0U) {
    v_4 = (short)((int)v_6 * (int)((short)v_8));
    v = (float)((double)v_4 + -3.3017476484e+38);
    result = (unsigned short)(- v);
  }
  else {
    v_12 = (unsigned char)(19614 * (int)((unsigned short)v_14));
    v_10 = (double)((unsigned long)((long)v_12 + 14688L) / 4294928087UL) - - (
           v_10 * 4294960206.);
    result = (unsigned short)(- v_10);
  }
  return result;
}


