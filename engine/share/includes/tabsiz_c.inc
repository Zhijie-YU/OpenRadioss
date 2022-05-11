Copyright>        OpenRadioss
Copyright>        Copyright (C) 1986-2022 Altair Engineering Inc.
Copyright>    
Copyright>        This program is free software: you can redistribute it and/or modify
Copyright>        it under the terms of the GNU Affero General Public License as published by
Copyright>        the Free Software Foundation, either version 3 of the License, or
Copyright>        (at your option) any later version.
Copyright>    
Copyright>        This program is distributed in the hope that it will be useful,
Copyright>        but WITHOUT ANY WARRANTY; without even the implied warranty of
Copyright>        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
Copyright>        GNU Affero General Public License for more details.
Copyright>    
Copyright>        You should have received a copy of the GNU Affero General Public License
Copyright>        along with this program.  If not, see <https://www.gnu.org/licenses/>.
Copyright>    
Copyright>    
Copyright>        Commercial Alternative: Altair Radioss Software 
Copyright>    
Copyright>        As an alternative to this open-source version, Altair also offers Altair Radioss 
Copyright>        software under a commercial license.  Contact Altair to discuss further if the 
Copyright>        commercial version may interest you: https://www.altair.com/radioss/.    
C Note SIEXMAD est uniquement utilise dans le starter. Dans l engine 
C ce tableau est eclate
C.../tabsize/
C
      COMMON /TABLESIZI/
     .  SICODE, SLSHSUB, SISKEW, SISKWN, SIFRAME, SNETH,
     .  SIBCSLAG, SIPART, SNOM_OPT, SNPC, SIXUR, SIXTG, 
     .  SIXTG1, SIXS, SIXQ, SIXC, SIXT, SIXP,
     .  SIXR, SITAB, SITABM1, SGJBUFI, SNALE, SIELVS,
     .  SIFILL, SIMS, SISUBS, SIGRN, SISURF, 
     .  SISLIN, SIBUFSSG, SKXX, SIXX, SKXSP, SIXSP,
     .  SNOD2SP, SISPSYM, SISPCOND, SISPHIO, SLPRTSPH, SLONFSPH,
     .  SIBCL, SIBFV, SIECRAN, SILAS, SIEBCS, SLACCELM,
     .  SLSENSOR, SNNLINK, SLNLINK, SIUSER, SIPARG, SDD_IAD,
     .  SIGRV, SIEXLNK, SIBVEL, SLBVEL, SIACTIV, 
     .  SIBMPC, SKINET, SIPARI, SINBUF, SNPRW, SNPRWA, SLPRW, SLPRWA, 
     .  SICONX, SIEXMAD, SMADPRT, SMADSH4, SMADSH3, SMADSOL, SMADNOD,
     .  SMADFAIL , SNPBY, SNPBYL, SLPBY, SLPBYL,  SLRIVET,
     .  SNSTRF, SLJOINT, SNODPOR, SMONVOL, SLAGBUF, SITHGRP, SITHBUF,
     .  SITHGRPA, SITHGRPB, SITHGRPC, SITHGRPD , SITHGRPE, SITHGRPF,
     .  SITHGRPG, SITHGRPH, SITHGRPI, SITHBUFA, SITHBUFB, SITHBUFC, 
     .  SITHBUFD, SITHBUFE, SITHBUFF, SITHBUFG, SITHBUFH, SITHBUFI,
     .  SIAD_ELEM, SIAD_RBY, SIAD_RBY2,
     .  SIAD_I2M,  SIADCJ, SIAD_RBM, SIAD_RBM2, SIAD_SEC, SIAD_CUT , 
     .  SFR_ELEM,  SFR_RBY ,  SFR_WALL, SFR_RBY2, SFR_I2M , SFR_MV, 
     .  SFR_LL, SFR_CJ, SFR_RBM, SFR_RBM2, SFR_SEC, SFR_CUT,
     .  SRG_CUT, SFR_MAD, SFR_I18, SWEIGHT, SNEWFRONT, SNODGLOB,
     .  SNBRCVOIS,SNBSDVOIS,SLNRCVOIS,SLNSDVOIS,SNERCVOIS,SNESDVOIS,
     .  SLERCVOIS,SLESDVOIS,NE_SLERCVOIS,NE_SLESDVOIS,SNIMPWALE,SLIMPWALE,SNPSEGCOM,SLSEGCOM,
     .  SNPORGEO, SLNODPOR, SICODT, SICODR, SISKY, SADSKY,
     .  SPROCNE, SADDCNI2, SPROCNI2, SIADSDP, SIADRCP, SIADS,
     .  SIADWAL , SIADRBK , SIADI2, SIADMV2, SIADMV3, 
     .  SIADLL, SIADRBM, SIADI18, SILINK, SFR_RL, SLLINK,
     .  SIADRL, SLINALE, SNEFLSW, SNNFLSW, SICUT,SLGRAV,SFASOLFR,
     .  SDD_R2R, SFR_LAGF, SLLAGF,SIGEO,SIPM,
Cow53a6+1 Inutile dans l engine mais par coherebce avec le starter
     .  SFR_IAD,SDD_FRONT, SICONTACT,
     .  SISKWP, SNSKWP, SISENSP, SNSENSP, SIACCP, SNACCP,
     .  SILEVSET,
     .  SIRBE3,SLRBE3,SIAD_RBE3M,SFR_RBE3M,SFR_RBYM,SFR_RBYM2,
     .  SIAD_RBYM,SIAD_RBYM2, SIADRBMK,SINOISE,SMADIDX,SNOM_SECT,
     .  SIRBE2,SLRBE2,SIAD_RBE2,SFR_RBE2,SIXTAB,SIXLEVSET,SPROCNE_PXFE,
     .  SITHVAR,SICFIELD,SLCFIELD,SFR_USERWI,SILOADP,SLLOADP,
     .  SPROCNE_CRKXFE, SIBUFSSG_IO,SIBORDNODE,SIEDGESH,SXNODANIMEL,     
     .  SIAD_EDGE,SFR_EDGE,SFR_NBEDGE,SIGAUP,SNGAUP,SDD_R2R_ELEM,
     .  SNODGLOBXFE,SRTHBUF,SKXIG3D,SIXIG3D,SKNOT,SIAD_CNDM,SFR_CNDM,
     .  SIADCND,SPROCNCND,SADDCNCND,STAB_MAT,SSEGQUADFR,
     .  LENSUBS,LENIGRNOD,LENIGRBRIC,LENIGRQUAD,LENIGRSH4N,LENIGRSH3N,
     .  LENIGRTRUS,LENIGRBEAM,LENIGRSPRI,LENIGRPART,LENISURF,LENISLIN,
     .  SKNOTLOCPC,SKNOTLOCEL,SIBCSCYC,SLBCSCYC

      INTEGER
     .  SICODE, SLSHSUB, SISKEW, SISKWN, SIFRAME, SNETH,
     .  SIBCSLAG, SIPART, SNOM_OPT, SNPC, SIXUR, SIXTG, 
     .  SIXTG1, SIXS, SIXQ, SIXC, SIXT, SIXP,
     .  SIXR, SITAB, SITABM1, SGJBUFI, SNALE, SIELVS,
     .  SIFILL, SIMS, SISUBS, SIGRN, SISURF, 
     .  SISLIN, SIBUFSSG, SKXX, SIXX, SKXSP, SIXSP,
     .  SNOD2SP, SISPSYM, SISPCOND, SISPHIO, SLPRTSPH, SLONFSPH,
     .  SIBCL, SIBFV, SIECRAN, SILAS, SIEBCS, SLACCELM,
     .  SLSENSOR, SNNLINK, SLNLINK, SIUSER, SIPARG, SDD_IAD,
     .  SIGRV,  SIEXLNK, SIBVEL, SLBVEL, SIACTIV, 
     .  SIBMPC, SKINET, SIPARI, SINBUF, SNPRW, SNPRWA, SLPRW, SLPRWA,
     .  SICONX, SIEXMAD, SMADPRT, SMADSH4, SMADSH3, SMADSOL, SMADNOD,
     .  SMADFAIL , SNPBY, SNPBYL, SLPBY, SLPBYL,  SLRIVET,
     .  SNSTRF, SLJOINT, SNODPOR, SMONVOL, SLAGBUF, SITHGRP, SITHBUF,
     .  SITHGRPA, SITHGRPB, SITHGRPC, SITHGRPD , SITHGRPE, SITHGRPF,
     .  SITHGRPG, SITHGRPH, SITHGRPI, SITHBUFA, SITHBUFB, SITHBUFC, 
     .  SITHBUFD, SITHBUFE, SITHBUFF, SITHBUFG, SITHBUFH, SITHBUFI,
     .  SIAD_ELEM, SIAD_RBY, SIAD_RBY2,
     .  SIAD_I2M,  SIADCJ, SIAD_RBM, SIAD_RBM2, SIAD_SEC, SIAD_CUT , 
     .  SFR_ELEM,  SFR_RBY ,  SFR_WALL, SFR_RBY2, SFR_I2M , SFR_MV, 
     .  SFR_LL, SFR_CJ, SFR_RBM, SFR_RBM2, SFR_SEC, SFR_CUT,
     .  SRG_CUT, SFR_MAD, SFR_I18, SWEIGHT, SNEWFRONT, SNODGLOB,
     .  SNBRCVOIS,SNBSDVOIS,SLNRCVOIS,SLNSDVOIS,SNERCVOIS,SNESDVOIS,
     .  SLERCVOIS,SLESDVOIS,NE_SLERCVOIS,NE_SLESDVOIS,SNIMPWALE,SLIMPWALE,SNPSEGCOM,SLSEGCOM,
     .  SNPORGEO, SLNODPOR, SICODT, SICODR, SISKY, SADSKY,
     .  SPROCNE, SADDCNI2, SPROCNI2, SIADSDP, SIADRCP, SIADS,
     .  SIADWAL , SIADRBK , SIADI2, SIADMV2, SIADMV3, 
     .  SIADLL, SIADRBM, SIADI18, SILINK, SFR_RL, SLLINK,
     .  SIADRL, SLINALE, SNEFLSW, SNNFLSW, SICUT,SLGRAV,SFASOLFR,
     .  SDD_R2R, SFR_LAGF, SLLAGF,SIGEO,SIPM,
Cow53a6+1 Inutile dans l engine mais par coherebce avec le starter
     .  SFR_IAD,SDD_FRONT, SICONTACT,
     .  SISKWP, SNSKWP, SISENSP, SNSENSP, SIACCP, SNACCP,
     .  SILEVSET,
     .  SIRBE3,SLRBE3,SIAD_RBE3M,SFR_RBE3M,SFR_RBYM,SFR_RBYM2,
     .  SIAD_RBYM,SIAD_RBYM2, SIADRBMK,SINOISE,SMADIDX,SNOM_SECT,
     .  SIRBE2,SLRBE2,SIAD_RBE2,SFR_RBE2,SIXTAB,SIXLEVSET,SPROCNE_PXFE,
     .  SITHVAR,SICFIELD,SLCFIELD,SFR_USERWI,SILOADP,SLLOADP,
     .  SPROCNE_CRKXFE, SIBUFSSG_IO,SIBORDNODE,SIEDGESH,SXNODANIMEL,     
     .  SIAD_EDGE,SFR_EDGE,SFR_NBEDGE,SIGAUP,SNGAUP,SDD_R2R_ELEM,
     .  SNODGLOBXFE,SRTHBUF,SKXIG3D,SIXIG3D,SKNOT,SIAD_CNDM,SFR_CNDM,
     .  SIADCND,SPROCNCND,SADDCNCND,STAB_MAT,SSEGQUADFR,
     .  LENSUBS,LENIGRNOD,LENIGRBRIC,LENIGRQUAD,LENIGRSH4N,LENIGRSH3N,
     .  LENIGRTRUS,LENIGRBEAM,LENIGRSPRI,LENIGRPART,LENISURF,LENISLIN,
     .  SKNOTLOCPC,SKNOTLOCEL,SIBCSCYC,SLBCSCYC


      COMMON /TABLESIZF/
     .  SX, SD, SV, SVR, SDR, STHKE,
     .  SDAMPR, SDAMP, SMS, SIN, STF, SPM,
     .  SSKEW, SXFRAME, SGEO, SEANI, SBUFMAT, SBUFGEO,
     .  SBUFSF, SRBMPC, SGJBUFR, SW, SVEUL, SFILL, 
     .  SDFILL, SALPH, SWB, SDSAVE, SDRSAVE, SASAVE, 
     .  SARSAVE, SSTSAVE, SSTRSAVE, SFSAVSAV,  SSPBUF,
     .  SVSPHIO, SSPHVELN, SMSNF, SFORC,
     .  SVEL, SFSAV, SFZERO, SXLAS, SREBCS, SACCELM,
     .  SSENSOR, SFBVEL, SGRAV, SFR_WAVE, SPARTS0, SUSER,
     .  SELBUF, SBUFIN,
     .  SDBUFIN, SRWBUF, SRWSAV, SRWALEB, SRBY, SRBYL, 
     .  SRIVET, SSECBUF, SVOLMON, SLAMBDA, SWA, SFV,
     .  SA, SAR, SSTIFN, SVISCN, SSTIFR, SPARTSAV, 
     .  SFSKY, SFSKYM, SFSKYI, SUWA, SVAL2, SPHI, 
     .  SSEGVAR, SR, SESTIF, SCRFLSW, SFLSW, SFANI,SFANI_CELL,
     .  SXCUT, SANIN, STANI, SSECFCUM, SWASPH,
     .  SW16,   SDRETRIO, SLBVRS, SPV,SRCONX, SRCONTACT,
     .  SXLS,SXLEVSET,
     .  SFRBE3,SFNOISE,SKVOL,SRXTAB,SCFIELD,
     .  SLOADP, SFSKYD, SDMSPH,SFSAV6,STABSEN,NBR_GPMP,
     .  TAILLE,TABMP_L


      INTEGER
     .  SX, SD, SV, SVR, SDR, STHKE,
     .  SDAMPR, SDAMP, SMS, SIN, STF, SPM,
     .  SSKEW, SXFRAME, SGEO, SEANI, SBUFMAT, SBUFGEO,
     .  SBUFSF, SRBMPC, SGJBUFR, SW, SVEUL, SFILL, 
     .  SDFILL, SALPH, SWB, SDSAVE, SDRSAVE, SASAVE, 
     .  SARSAVE, SSTSAVE, SSTRSAVE, SFSAVSAV,  SSPBUF,
     .  SVSPHIO, SSPHVELN, SMSNF, SFORC,
     .  SVEL, SFSAV, SFZERO, SXLAS, SREBCS, SACCELM,
     .  SSENSOR, SFBVEL, SGRAV, SFR_WAVE, SPARTS0, SUSER,
     .  SELBUF,  SBUFIN,
     .  SDBUFIN, SRWBUF, SRWSAV, SRWALEB, SRBY, SRBYL, 
     .  SRIVET, SSECBUF, SVOLMON, SLAMBDA, SWA, SFV,
     .  SA, SAR, SSTIFN, SVISCN, SSTIFR, SPARTSAV, 
     .  SFSKY, SFSKYM, SFSKYI, SUWA, SVAL2, SPHI, 
     .  SSEGVAR, SR, SESTIF, SCRFLSW, SFLSW, SFANI,SFANI_CELL,
     .  SXCUT, SANIN, STANI,  SSECFCUM, SWASPH,
     .  SW16,   SDRETRIO, SLBVRS, SPV,SRCONX, SRCONTACT,
     .  SXLS,SXLEVSET,
     .  SFRBE3,SFNOISE,SKVOL,SRXTAB,SCFIELD,
     .  SLOADP, SFSKYD, SDMSPH,SFSAV6,STABSEN,NBR_GPMP,
     .  TAILLE,TABMP_L

      INTEGER   LMXVINTG
      PARAMETER (LMXVINTG=4000)     

      COMMON /RESTVARS/  NNOISE_SAV

      INTEGER  NNOISE_SAV



