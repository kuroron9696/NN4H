#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT func1_58_840_52101840;

SignalI z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makez__value_52239140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)func1_58_840_52101840;
   signalI->name = "z_value";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI a_52434380_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makea_52434380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   a_52434380_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)func1_58_840_52101840;
   signalI->name = "a";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __49041460;

void code__49041460() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->c_value;
            first = value2integer(make__49201020());
            last = value2integer(make__49200960());
            dst = read_range(ref,first,last,get_type_signed(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__49041460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49041460 = block;
   block->owner = (Object)__49041020;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49041460;

   return block;
};

Block __49040920;

void code__49040920() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
      dst = cast_value(src0,get_type_vector(get_type_signed(),4),dst);
      set_value_pos(pool_state);
   dst; }),make_ref_rangeS(z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900,value2integer(make__49200740()),value2integer(make__49200720())));
      set_value_pos(pool_state);
   }
}

Block make__49040920() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49040920 = block;
   block->owner = (Object)__49039780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49040920;

   return block;
};

Block __49039440;

void code__49039440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1;
      Value dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value;
      src1 = ({
            Value src0,src1,src2,src3;
            Value dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = make__49199800();
            src1 = make__49199780();
            src2 = make__49199660();
            src3 = make__49199540();
            concat_value(4,1,dst,src0,src1,src2,src3);
            set_value_pos(pool_state);
         dst; });
      concat_value(2,1,dst,src0,src1);
      set_value_pos(pool_state);
   dst; }),integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__49039440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49039440 = block;
   block->owner = (Object)__49037860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49039440;

   return block;
};

Block __49042800;

void code__49042800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value,addr_53445560_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->c_value,z__value_52185620_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value,base_52409900_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value,next__data_52508540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value,integer__part_52609260_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value,a_52434380_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__49042800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49042800 = block;
   block->owner = (Object)__49119700;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49042800;

   return block;
};

Block __49042180;

void code__49042180() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value,base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->c_value,next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
      set_value_pos(pool_state);
   }
}

Block make__49042180() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49042180 = block;
   block->owner = (Object)__49167160;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49042180;

   return block;
};

Value make__49201020() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49200960() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49200740() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49200720() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__49199800() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49199780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49199660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__49199540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Scope __53770600;

SignalI base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makebase_53884660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53770600;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makenext__data_53966960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53770600;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makeaddr_53966860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53770600;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),4);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900;

SignalI makeinteger__part_54054980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900 = signalI;
   signalI->owner = (Object)__53770600;
   signalI->name = "integer_part";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI my__lut_53731340;

SystemI makemy__lut_53731340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__lut_53731340 = systemI;
   systemI->owner = (Object)__53770600;
   systemI->name = "my_lut";
   systemI->system = my__lut_58_8400_53447960;

   return systemI;
};

SystemI my__interpolator_52792340;

SystemI makemy__interpolator_52792340() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   my__interpolator_52792340 = systemI;
   systemI->owner = (Object)__53770600;
   systemI->name = "my_interpolator";
   systemI->system = my__interpolator_58_8400_52087320;

   return systemI;
};

Behavior __49041020;

Behavior make__49041020() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49041020 = behavior;
   behavior->owner = (Object)__53770600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900);
   z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->any,z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->any[z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49041460();

   return behavior;
}

Behavior __49039780;

Behavior make__49039780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49039780 = behavior;
   behavior->owner = (Object)__53770600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49040920();

   return behavior;
}

Behavior __49037860;

Behavior make__49037860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49037860 = behavior;
   behavior->owner = (Object)__53770600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49039440();

   return behavior;
}

Behavior __49119700;

Behavior make__49119700() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49119700 = behavior;
   behavior->owner = (Object)__53770600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 6;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[addr_53966860___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900);
   z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->any,z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->any[z__value_52239140_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[base_53884660___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[next__data_53966960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[integer__part_54054980___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[5] = make_event(ANYEDGE,interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[interpolated__value_52792540_my__interpolator_58_8400_52087320___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49042800();

   return behavior;
}

Behavior __49167160;

Behavior make__49167160() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49167160 = behavior;
   behavior->owner = (Object)__53770600;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[base_53563160_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900);
   next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any += 1;
   next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any = realloc(next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any,next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any*sizeof(Object));
next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->any[next__data_53731480_my__lut_58_8400_53447960___53770600_func1_58_840_52101840___49182120______58_840_54038900->num_any-1] = (Object)behavior;
   behavior->block = make__49042180();

   return behavior;
}

Scope make__53770600() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __53770600 = scope;
   scope->owner = (Object)func1_58_840_52101840;
   scope->name = "";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makemy__lut_53731340();
   scope->systemIs[1] = makemy__interpolator_52792340();
   scope->num_inners = 4;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makebase_53884660();
   scope->inners[1] = makenext__data_53966960();
   scope->inners[2] = makeaddr_53966860();
   scope->inners[3] = makeinteger__part_54054980();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 5;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49041020();
   scope->behaviors[1] = make__49039780();
   scope->behaviors[2] = make__49037860();
   scope->behaviors[3] = make__49119700();
   scope->behaviors[4] = make__49167160();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makefunc1_58_840_52101840() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   func1_58_840_52101840 = systemT;
systemT->owner = NULL;
   systemT->name = "func1:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_52239140();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makea_52434380();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__53770600();

   return systemT;
}