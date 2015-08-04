/* File: "trigger_guard_alert_WCVtau.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 006*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="label: ?wellClearViolation",color=plum, style=filled]
0 -> 1
2 [label="op2: &&",color=green4, style=filled]
1 -> 2
3 [label="label: ?horizontalWCV",color=plum, style=filled]
2 -> 3
4 [label="op2: ||",color=green4, style=filled]
3 -> 4
5 [label="op2: <=",color=green4, style=filled]
4 -> 5
6 [label="label: ?norm2dim",color=plum, style=filled]
5 -> 6
7 [label="ext_sqrt_8",color=cyan4, style=filled]
6 -> 7
49 [label="label: ?nm",color=plum, style=filled]
5 -> 49
50 [label="const: 1852.0",color=red1, style=filled]
49 -> 50
51 [label="op2: &&",color=green4, style=filled]
4 -> 51
52 [label="op2: <=",color=green4, style=filled]
51 -> 52
53 [label="label: ?norm2dim",color=plum, style=filled]
52 -> 53
54 [label="ext_sqrt_9",color=cyan4, style=filled]
53 -> 54
724 [label="label: ?nm",color=plum, style=filled]
52 -> 724
725 [label="const: 1852.0",color=red1, style=filled]
724 -> 725
726 [label="op2: &&",color=green4, style=filled]
51 -> 726
727 [label="op2: <=",color=green4, style=filled]
726 -> 727
728 [label="const: 0.0",color=red1, style=filled]
727 -> 728
729 [label="label: ?tau",color=plum, style=filled]
727 -> 729
730 [label="op3: mux",color=green4, style=filled]
729 -> 730
731 [label="op2: <",color=green4, style=filled]
730 -> 731
732 [label="label: ?scalar2dim",color=plum, style=filled]
731 -> 732
733 [label="op2: +",color=green4, style=filled]
732 -> 733
734 [label="op2: *",color=green4, style=filled]
733 -> 734
735 [label="op2: -",color=green4, style=filled]
734 -> 735
736 [label="label: ?ownPositionX",color=plum, style=filled]
735 -> 736
737 [label="op2: *",color=green4, style=filled]
736 -> 737
738 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
737 -> 738
739 [label="const: 0.3048",color=red1, style=filled]
737 -> 739
740 [label="label: ?intPositionX",color=plum, style=filled]
735 -> 740
741 [label="op2: *",color=green4, style=filled]
740 -> 741
742 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
741 -> 742
743 [label="const: 0.3048",color=red1, style=filled]
741 -> 743
744 [label="op2: -",color=green4, style=filled]
734 -> 744
745 [label="label: ?ownVelocityX",color=plum, style=filled]
744 -> 745
746 [label="op2: /",color=green4, style=filled]
745 -> 746
747 [label="op2: *",color=green4, style=filled]
746 -> 747
748 [label="ext_ownship_vx",color=cyan1, style=filled]
747 -> 748
749 [label="const: 0.3048",color=red1, style=filled]
747 -> 749
750 [label="const: 1.0",color=red1, style=filled]
746 -> 750
751 [label="label: ?intVelocityX",color=plum, style=filled]
744 -> 751
752 [label="op2: /",color=green4, style=filled]
751 -> 752
753 [label="op2: *",color=green4, style=filled]
752 -> 753
754 [label="ext_intruder_vx",color=cyan1, style=filled]
753 -> 754
755 [label="const: 0.3048",color=red1, style=filled]
753 -> 755
756 [label="const: 1.0",color=red1, style=filled]
752 -> 756
757 [label="op2: *",color=green4, style=filled]
733 -> 757
758 [label="op2: -",color=green4, style=filled]
757 -> 758
759 [label="label: ?ownPositionY",color=plum, style=filled]
758 -> 759
760 [label="op2: *",color=green4, style=filled]
759 -> 760
761 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
760 -> 761
762 [label="const: 0.3048",color=red1, style=filled]
760 -> 762
763 [label="label: ?intPositionY",color=plum, style=filled]
758 -> 763
764 [label="op2: *",color=green4, style=filled]
763 -> 764
765 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
764 -> 765
766 [label="const: 0.3048",color=red1, style=filled]
764 -> 766
767 [label="op2: -",color=green4, style=filled]
757 -> 767
768 [label="label: ?ownVelocityY",color=plum, style=filled]
767 -> 768
769 [label="op2: /",color=green4, style=filled]
768 -> 769
770 [label="op2: *",color=green4, style=filled]
769 -> 770
771 [label="ext_ownship_vy",color=cyan1, style=filled]
770 -> 771
772 [label="const: 0.3048",color=red1, style=filled]
770 -> 772
773 [label="const: 1.0",color=red1, style=filled]
769 -> 773
774 [label="label: ?intVelocityY",color=plum, style=filled]
767 -> 774
775 [label="op2: /",color=green4, style=filled]
774 -> 775
776 [label="op2: *",color=green4, style=filled]
775 -> 776
777 [label="ext_intruder_vy",color=cyan1, style=filled]
776 -> 777
778 [label="const: 0.3048",color=red1, style=filled]
776 -> 778
779 [label="const: 1.0",color=red1, style=filled]
775 -> 779
780 [label="const: 0.0",color=red1, style=filled]
731 -> 780
781 [label="op2: /",color=green4, style=filled]
730 -> 781
782 [label="op2: -",color=green4, style=filled]
781 -> 782
783 [label="const: 0.0",color=red1, style=filled]
782 -> 783
784 [label="label: ?normsq2dim",color=plum, style=filled]
782 -> 784
785 [label="label: ?scalar2dim",color=plum, style=filled]
784 -> 785
786 [label="op2: +",color=green4, style=filled]
785 -> 786
787 [label="op2: *",color=green4, style=filled]
786 -> 787
788 [label="op2: -",color=green4, style=filled]
787 -> 788
789 [label="label: ?ownPositionX",color=plum, style=filled]
788 -> 789
790 [label="op2: *",color=green4, style=filled]
789 -> 790
791 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
790 -> 791
792 [label="const: 0.3048",color=red1, style=filled]
790 -> 792
793 [label="label: ?intPositionX",color=plum, style=filled]
788 -> 793
794 [label="op2: *",color=green4, style=filled]
793 -> 794
795 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
794 -> 795
796 [label="const: 0.3048",color=red1, style=filled]
794 -> 796
797 [label="op2: -",color=green4, style=filled]
787 -> 797
798 [label="label: ?ownPositionX",color=plum, style=filled]
797 -> 798
799 [label="op2: *",color=green4, style=filled]
798 -> 799
800 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
799 -> 800
801 [label="const: 0.3048",color=red1, style=filled]
799 -> 801
802 [label="label: ?intPositionX",color=plum, style=filled]
797 -> 802
803 [label="op2: *",color=green4, style=filled]
802 -> 803
804 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
803 -> 804
805 [label="const: 0.3048",color=red1, style=filled]
803 -> 805
806 [label="op2: *",color=green4, style=filled]
786 -> 806
807 [label="op2: -",color=green4, style=filled]
806 -> 807
808 [label="label: ?ownPositionY",color=plum, style=filled]
807 -> 808
809 [label="op2: *",color=green4, style=filled]
808 -> 809
810 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
809 -> 810
811 [label="const: 0.3048",color=red1, style=filled]
809 -> 811
812 [label="label: ?intPositionY",color=plum, style=filled]
807 -> 812
813 [label="op2: *",color=green4, style=filled]
812 -> 813
814 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
813 -> 814
815 [label="const: 0.3048",color=red1, style=filled]
813 -> 815
816 [label="op2: -",color=green4, style=filled]
806 -> 816
817 [label="label: ?ownPositionY",color=plum, style=filled]
816 -> 817
818 [label="op2: *",color=green4, style=filled]
817 -> 818
819 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
818 -> 819
820 [label="const: 0.3048",color=red1, style=filled]
818 -> 820
821 [label="label: ?intPositionY",color=plum, style=filled]
816 -> 821
822 [label="op2: *",color=green4, style=filled]
821 -> 822
823 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
822 -> 823
824 [label="const: 0.3048",color=red1, style=filled]
822 -> 824
825 [label="label: ?scalar2dim",color=plum, style=filled]
781 -> 825
826 [label="op2: +",color=green4, style=filled]
825 -> 826
827 [label="op2: *",color=green4, style=filled]
826 -> 827
828 [label="op2: -",color=green4, style=filled]
827 -> 828
829 [label="label: ?ownPositionX",color=plum, style=filled]
828 -> 829
830 [label="op2: *",color=green4, style=filled]
829 -> 830
831 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
830 -> 831
832 [label="const: 0.3048",color=red1, style=filled]
830 -> 832
833 [label="label: ?intPositionX",color=plum, style=filled]
828 -> 833
834 [label="op2: *",color=green4, style=filled]
833 -> 834
835 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
834 -> 835
836 [label="const: 0.3048",color=red1, style=filled]
834 -> 836
837 [label="op2: -",color=green4, style=filled]
827 -> 837
838 [label="label: ?ownVelocityX",color=plum, style=filled]
837 -> 838
839 [label="op2: /",color=green4, style=filled]
838 -> 839
840 [label="op2: *",color=green4, style=filled]
839 -> 840
841 [label="ext_ownship_vx",color=cyan1, style=filled]
840 -> 841
842 [label="const: 0.3048",color=red1, style=filled]
840 -> 842
843 [label="const: 1.0",color=red1, style=filled]
839 -> 843
844 [label="label: ?intVelocityX",color=plum, style=filled]
837 -> 844
845 [label="op2: /",color=green4, style=filled]
844 -> 845
846 [label="op2: *",color=green4, style=filled]
845 -> 846
847 [label="ext_intruder_vx",color=cyan1, style=filled]
846 -> 847
848 [label="const: 0.3048",color=red1, style=filled]
846 -> 848
849 [label="const: 1.0",color=red1, style=filled]
845 -> 849
850 [label="op2: *",color=green4, style=filled]
826 -> 850
851 [label="op2: -",color=green4, style=filled]
850 -> 851
852 [label="label: ?ownPositionY",color=plum, style=filled]
851 -> 852
853 [label="op2: *",color=green4, style=filled]
852 -> 853
854 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
853 -> 854
855 [label="const: 0.3048",color=red1, style=filled]
853 -> 855
856 [label="label: ?intPositionY",color=plum, style=filled]
851 -> 856
857 [label="op2: *",color=green4, style=filled]
856 -> 857
858 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
857 -> 858
859 [label="const: 0.3048",color=red1, style=filled]
857 -> 859
860 [label="op2: -",color=green4, style=filled]
850 -> 860
861 [label="label: ?ownVelocityY",color=plum, style=filled]
860 -> 861
862 [label="op2: /",color=green4, style=filled]
861 -> 862
863 [label="op2: *",color=green4, style=filled]
862 -> 863
864 [label="ext_ownship_vy",color=cyan1, style=filled]
863 -> 864
865 [label="const: 0.3048",color=red1, style=filled]
863 -> 865
866 [label="const: 1.0",color=red1, style=filled]
862 -> 866
867 [label="label: ?intVelocityY",color=plum, style=filled]
860 -> 867
868 [label="op2: /",color=green4, style=filled]
867 -> 868
869 [label="op2: *",color=green4, style=filled]
868 -> 869
870 [label="ext_intruder_vy",color=cyan1, style=filled]
869 -> 870
871 [label="const: 0.3048",color=red1, style=filled]
869 -> 871
872 [label="const: 1.0",color=red1, style=filled]
868 -> 872
873 [label="const: -1.0",color=red1, style=filled]
730 -> 873
874 [label="op2: <=",color=green4, style=filled]
726 -> 874
875 [label="label: ?tau",color=plum, style=filled]
874 -> 875
876 [label="op3: mux",color=green4, style=filled]
875 -> 876
877 [label="op2: <",color=green4, style=filled]
876 -> 877
878 [label="label: ?scalar2dim",color=plum, style=filled]
877 -> 878
879 [label="op2: +",color=green4, style=filled]
878 -> 879
880 [label="op2: *",color=green4, style=filled]
879 -> 880
881 [label="op2: -",color=green4, style=filled]
880 -> 881
882 [label="label: ?ownPositionX",color=plum, style=filled]
881 -> 882
883 [label="op2: *",color=green4, style=filled]
882 -> 883
884 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
883 -> 884
885 [label="const: 0.3048",color=red1, style=filled]
883 -> 885
886 [label="label: ?intPositionX",color=plum, style=filled]
881 -> 886
887 [label="op2: *",color=green4, style=filled]
886 -> 887
888 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
887 -> 888
889 [label="const: 0.3048",color=red1, style=filled]
887 -> 889
890 [label="op2: -",color=green4, style=filled]
880 -> 890
891 [label="label: ?ownVelocityX",color=plum, style=filled]
890 -> 891
892 [label="op2: /",color=green4, style=filled]
891 -> 892
893 [label="op2: *",color=green4, style=filled]
892 -> 893
894 [label="ext_ownship_vx",color=cyan1, style=filled]
893 -> 894
895 [label="const: 0.3048",color=red1, style=filled]
893 -> 895
896 [label="const: 1.0",color=red1, style=filled]
892 -> 896
897 [label="label: ?intVelocityX",color=plum, style=filled]
890 -> 897
898 [label="op2: /",color=green4, style=filled]
897 -> 898
899 [label="op2: *",color=green4, style=filled]
898 -> 899
900 [label="ext_intruder_vx",color=cyan1, style=filled]
899 -> 900
901 [label="const: 0.3048",color=red1, style=filled]
899 -> 901
902 [label="const: 1.0",color=red1, style=filled]
898 -> 902
903 [label="op2: *",color=green4, style=filled]
879 -> 903
904 [label="op2: -",color=green4, style=filled]
903 -> 904
905 [label="label: ?ownPositionY",color=plum, style=filled]
904 -> 905
906 [label="op2: *",color=green4, style=filled]
905 -> 906
907 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
906 -> 907
908 [label="const: 0.3048",color=red1, style=filled]
906 -> 908
909 [label="label: ?intPositionY",color=plum, style=filled]
904 -> 909
910 [label="op2: *",color=green4, style=filled]
909 -> 910
911 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
910 -> 911
912 [label="const: 0.3048",color=red1, style=filled]
910 -> 912
913 [label="op2: -",color=green4, style=filled]
903 -> 913
914 [label="label: ?ownVelocityY",color=plum, style=filled]
913 -> 914
915 [label="op2: /",color=green4, style=filled]
914 -> 915
916 [label="op2: *",color=green4, style=filled]
915 -> 916
917 [label="ext_ownship_vy",color=cyan1, style=filled]
916 -> 917
918 [label="const: 0.3048",color=red1, style=filled]
916 -> 918
919 [label="const: 1.0",color=red1, style=filled]
915 -> 919
920 [label="label: ?intVelocityY",color=plum, style=filled]
913 -> 920
921 [label="op2: /",color=green4, style=filled]
920 -> 921
922 [label="op2: *",color=green4, style=filled]
921 -> 922
923 [label="ext_intruder_vy",color=cyan1, style=filled]
922 -> 923
924 [label="const: 0.3048",color=red1, style=filled]
922 -> 924
925 [label="const: 1.0",color=red1, style=filled]
921 -> 925
926 [label="const: 0.0",color=red1, style=filled]
877 -> 926
927 [label="op2: /",color=green4, style=filled]
876 -> 927
928 [label="op2: -",color=green4, style=filled]
927 -> 928
929 [label="const: 0.0",color=red1, style=filled]
928 -> 929
930 [label="label: ?normsq2dim",color=plum, style=filled]
928 -> 930
931 [label="label: ?scalar2dim",color=plum, style=filled]
930 -> 931
932 [label="op2: +",color=green4, style=filled]
931 -> 932
933 [label="op2: *",color=green4, style=filled]
932 -> 933
934 [label="op2: -",color=green4, style=filled]
933 -> 934
935 [label="label: ?ownPositionX",color=plum, style=filled]
934 -> 935
936 [label="op2: *",color=green4, style=filled]
935 -> 936
937 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
936 -> 937
938 [label="const: 0.3048",color=red1, style=filled]
936 -> 938
939 [label="label: ?intPositionX",color=plum, style=filled]
934 -> 939
940 [label="op2: *",color=green4, style=filled]
939 -> 940
941 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
940 -> 941
942 [label="const: 0.3048",color=red1, style=filled]
940 -> 942
943 [label="op2: -",color=green4, style=filled]
933 -> 943
944 [label="label: ?ownPositionX",color=plum, style=filled]
943 -> 944
945 [label="op2: *",color=green4, style=filled]
944 -> 945
946 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
945 -> 946
947 [label="const: 0.3048",color=red1, style=filled]
945 -> 947
948 [label="label: ?intPositionX",color=plum, style=filled]
943 -> 948
949 [label="op2: *",color=green4, style=filled]
948 -> 949
950 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
949 -> 950
951 [label="const: 0.3048",color=red1, style=filled]
949 -> 951
952 [label="op2: *",color=green4, style=filled]
932 -> 952
953 [label="op2: -",color=green4, style=filled]
952 -> 953
954 [label="label: ?ownPositionY",color=plum, style=filled]
953 -> 954
955 [label="op2: *",color=green4, style=filled]
954 -> 955
956 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
955 -> 956
957 [label="const: 0.3048",color=red1, style=filled]
955 -> 957
958 [label="label: ?intPositionY",color=plum, style=filled]
953 -> 958
959 [label="op2: *",color=green4, style=filled]
958 -> 959
960 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
959 -> 960
961 [label="const: 0.3048",color=red1, style=filled]
959 -> 961
962 [label="op2: -",color=green4, style=filled]
952 -> 962
963 [label="label: ?ownPositionY",color=plum, style=filled]
962 -> 963
964 [label="op2: *",color=green4, style=filled]
963 -> 964
965 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
964 -> 965
966 [label="const: 0.3048",color=red1, style=filled]
964 -> 966
967 [label="label: ?intPositionY",color=plum, style=filled]
962 -> 967
968 [label="op2: *",color=green4, style=filled]
967 -> 968
969 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
968 -> 969
970 [label="const: 0.3048",color=red1, style=filled]
968 -> 970
971 [label="label: ?scalar2dim",color=plum, style=filled]
927 -> 971
972 [label="op2: +",color=green4, style=filled]
971 -> 972
973 [label="op2: *",color=green4, style=filled]
972 -> 973
974 [label="op2: -",color=green4, style=filled]
973 -> 974
975 [label="label: ?ownPositionX",color=plum, style=filled]
974 -> 975
976 [label="op2: *",color=green4, style=filled]
975 -> 976
977 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
976 -> 977
978 [label="const: 0.3048",color=red1, style=filled]
976 -> 978
979 [label="label: ?intPositionX",color=plum, style=filled]
974 -> 979
980 [label="op2: *",color=green4, style=filled]
979 -> 980
981 [label="ext_intruder_x_position_ft",color=cyan1, style=filled]
980 -> 981
982 [label="const: 0.3048",color=red1, style=filled]
980 -> 982
983 [label="op2: -",color=green4, style=filled]
973 -> 983
984 [label="label: ?ownVelocityX",color=plum, style=filled]
983 -> 984
985 [label="op2: /",color=green4, style=filled]
984 -> 985
986 [label="op2: *",color=green4, style=filled]
985 -> 986
987 [label="ext_ownship_vx",color=cyan1, style=filled]
986 -> 987
988 [label="const: 0.3048",color=red1, style=filled]
986 -> 988
989 [label="const: 1.0",color=red1, style=filled]
985 -> 989
990 [label="label: ?intVelocityX",color=plum, style=filled]
983 -> 990
991 [label="op2: /",color=green4, style=filled]
990 -> 991
992 [label="op2: *",color=green4, style=filled]
991 -> 992
993 [label="ext_intruder_vx",color=cyan1, style=filled]
992 -> 993
994 [label="const: 0.3048",color=red1, style=filled]
992 -> 994
995 [label="const: 1.0",color=red1, style=filled]
991 -> 995
996 [label="op2: *",color=green4, style=filled]
972 -> 996
997 [label="op2: -",color=green4, style=filled]
996 -> 997
998 [label="label: ?ownPositionY",color=plum, style=filled]
997 -> 998
999 [label="op2: *",color=green4, style=filled]
998 -> 999
1000 [label="ext_ownship_x_position_ft",color=cyan1, style=filled]
999 -> 1000
1001 [label="const: 0.3048",color=red1, style=filled]
999 -> 1001
1002 [label="label: ?intPositionY",color=plum, style=filled]
997 -> 1002
1003 [label="op2: *",color=green4, style=filled]
1002 -> 1003
1004 [label="ext_intruder_y_position_ft",color=cyan1, style=filled]
1003 -> 1004
1005 [label="const: 0.3048",color=red1, style=filled]
1003 -> 1005
1006 [label="op2: -",color=green4, style=filled]
996 -> 1006
1007 [label="label: ?ownVelocityY",color=plum, style=filled]
1006 -> 1007
1008 [label="op2: /",color=green4, style=filled]
1007 -> 1008
1009 [label="op2: *",color=green4, style=filled]
1008 -> 1009
1010 [label="ext_ownship_vy",color=cyan1, style=filled]
1009 -> 1010
1011 [label="const: 0.3048",color=red1, style=filled]
1009 -> 1011
1012 [label="const: 1.0",color=red1, style=filled]
1008 -> 1012
1013 [label="label: ?intVelocityY",color=plum, style=filled]
1006 -> 1013
1014 [label="op2: /",color=green4, style=filled]
1013 -> 1014
1015 [label="op2: *",color=green4, style=filled]
1014 -> 1015
1016 [label="ext_intruder_vy",color=cyan1, style=filled]
1015 -> 1016
1017 [label="const: 0.3048",color=red1, style=filled]
1015 -> 1017
1018 [label="const: 1.0",color=red1, style=filled]
1014 -> 1018
1019 [label="const: -1.0",color=red1, style=filled]
876 -> 1019
1020 [label="const: 30.0",color=red1, style=filled]
874 -> 1020
1021 [label="label: ?verticalWCV",color=plum, style=filled]
2 -> 1021
1022 [label="op2: ||",color=green4, style=filled]
1021 -> 1022
1023 [label="op2: <=",color=green4, style=filled]
1022 -> 1023
1024 [label="op1: abs",color=green4, style=filled]
1023 -> 1024
1025 [label="op2: -",color=green4, style=filled]
1024 -> 1025
1026 [label="label: ?ownPositionZ",color=plum, style=filled]
1025 -> 1026
1027 [label="op2: *",color=green4, style=filled]
1026 -> 1027
1028 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1027 -> 1028
1029 [label="const: 0.3048",color=red1, style=filled]
1027 -> 1029
1030 [label="label: ?intPositionZ",color=plum, style=filled]
1025 -> 1030
1031 [label="op2: *",color=green4, style=filled]
1030 -> 1031
1032 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1031 -> 1032
1033 [label="const: 0.3048",color=red1, style=filled]
1031 -> 1033
1034 [label="const: 144.78",color=red1, style=filled]
1023 -> 1034
1035 [label="op2: &&",color=green4, style=filled]
1022 -> 1035
1036 [label="op2: <=",color=green4, style=filled]
1035 -> 1036
1037 [label="const: 0.0",color=red1, style=filled]
1036 -> 1037
1038 [label="label: ?tcoa",color=plum, style=filled]
1036 -> 1038
1039 [label="op3: mux",color=green4, style=filled]
1038 -> 1039
1040 [label="op2: <",color=green4, style=filled]
1039 -> 1040
1041 [label="op2: *",color=green4, style=filled]
1040 -> 1041
1042 [label="op2: -",color=green4, style=filled]
1041 -> 1042
1043 [label="label: ?ownPositionZ",color=plum, style=filled]
1042 -> 1043
1044 [label="op2: *",color=green4, style=filled]
1043 -> 1044
1045 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1044 -> 1045
1046 [label="const: 0.3048",color=red1, style=filled]
1044 -> 1046
1047 [label="label: ?intPositionZ",color=plum, style=filled]
1042 -> 1047
1048 [label="op2: *",color=green4, style=filled]
1047 -> 1048
1049 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1048 -> 1049
1050 [label="const: 0.3048",color=red1, style=filled]
1048 -> 1050
1051 [label="op2: -",color=green4, style=filled]
1041 -> 1051
1052 [label="label: ?ownVelocityZ",color=plum, style=filled]
1051 -> 1052
1053 [label="op2: /",color=green4, style=filled]
1052 -> 1053
1054 [label="op2: *",color=green4, style=filled]
1053 -> 1054
1055 [label="ext_ownship_vz",color=cyan1, style=filled]
1054 -> 1055
1056 [label="const: 0.3048",color=red1, style=filled]
1054 -> 1056
1057 [label="const: 1.0",color=red1, style=filled]
1053 -> 1057
1058 [label="label: ?intVelocityZ",color=plum, style=filled]
1051 -> 1058
1059 [label="op2: /",color=green4, style=filled]
1058 -> 1059
1060 [label="op2: *",color=green4, style=filled]
1059 -> 1060
1061 [label="ext_intruder_vz",color=cyan1, style=filled]
1060 -> 1061
1062 [label="const: 0.3048",color=red1, style=filled]
1060 -> 1062
1063 [label="const: 1.0",color=red1, style=filled]
1059 -> 1063
1064 [label="const: 0.0",color=red1, style=filled]
1040 -> 1064
1065 [label="op2: /",color=green4, style=filled]
1039 -> 1065
1066 [label="op2: -",color=green4, style=filled]
1065 -> 1066
1067 [label="const: 0.0",color=red1, style=filled]
1066 -> 1067
1068 [label="op2: -",color=green4, style=filled]
1066 -> 1068
1069 [label="label: ?ownPositionZ",color=plum, style=filled]
1068 -> 1069
1070 [label="op2: *",color=green4, style=filled]
1069 -> 1070
1071 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1070 -> 1071
1072 [label="const: 0.3048",color=red1, style=filled]
1070 -> 1072
1073 [label="label: ?intPositionZ",color=plum, style=filled]
1068 -> 1073
1074 [label="op2: *",color=green4, style=filled]
1073 -> 1074
1075 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1074 -> 1075
1076 [label="const: 0.3048",color=red1, style=filled]
1074 -> 1076
1077 [label="op2: -",color=green4, style=filled]
1065 -> 1077
1078 [label="label: ?ownVelocityZ",color=plum, style=filled]
1077 -> 1078
1079 [label="op2: /",color=green4, style=filled]
1078 -> 1079
1080 [label="op2: *",color=green4, style=filled]
1079 -> 1080
1081 [label="ext_ownship_vz",color=cyan1, style=filled]
1080 -> 1081
1082 [label="const: 0.3048",color=red1, style=filled]
1080 -> 1082
1083 [label="const: 1.0",color=red1, style=filled]
1079 -> 1083
1084 [label="label: ?intVelocityZ",color=plum, style=filled]
1077 -> 1084
1085 [label="op2: /",color=green4, style=filled]
1084 -> 1085
1086 [label="op2: *",color=green4, style=filled]
1085 -> 1086
1087 [label="ext_intruder_vz",color=cyan1, style=filled]
1086 -> 1087
1088 [label="const: 0.3048",color=red1, style=filled]
1086 -> 1088
1089 [label="const: 1.0",color=red1, style=filled]
1085 -> 1089
1090 [label="const: -1.0",color=red1, style=filled]
1039 -> 1090
1091 [label="op2: <=",color=green4, style=filled]
1035 -> 1091
1092 [label="label: ?tcoa",color=plum, style=filled]
1091 -> 1092
1093 [label="op3: mux",color=green4, style=filled]
1092 -> 1093
1094 [label="op2: <",color=green4, style=filled]
1093 -> 1094
1095 [label="op2: *",color=green4, style=filled]
1094 -> 1095
1096 [label="op2: -",color=green4, style=filled]
1095 -> 1096
1097 [label="label: ?ownPositionZ",color=plum, style=filled]
1096 -> 1097
1098 [label="op2: *",color=green4, style=filled]
1097 -> 1098
1099 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1098 -> 1099
1100 [label="const: 0.3048",color=red1, style=filled]
1098 -> 1100
1101 [label="label: ?intPositionZ",color=plum, style=filled]
1096 -> 1101
1102 [label="op2: *",color=green4, style=filled]
1101 -> 1102
1103 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1102 -> 1103
1104 [label="const: 0.3048",color=red1, style=filled]
1102 -> 1104
1105 [label="op2: -",color=green4, style=filled]
1095 -> 1105
1106 [label="label: ?ownVelocityZ",color=plum, style=filled]
1105 -> 1106
1107 [label="op2: /",color=green4, style=filled]
1106 -> 1107
1108 [label="op2: *",color=green4, style=filled]
1107 -> 1108
1109 [label="ext_ownship_vz",color=cyan1, style=filled]
1108 -> 1109
1110 [label="const: 0.3048",color=red1, style=filled]
1108 -> 1110
1111 [label="const: 1.0",color=red1, style=filled]
1107 -> 1111
1112 [label="label: ?intVelocityZ",color=plum, style=filled]
1105 -> 1112
1113 [label="op2: /",color=green4, style=filled]
1112 -> 1113
1114 [label="op2: *",color=green4, style=filled]
1113 -> 1114
1115 [label="ext_intruder_vz",color=cyan1, style=filled]
1114 -> 1115
1116 [label="const: 0.3048",color=red1, style=filled]
1114 -> 1116
1117 [label="const: 1.0",color=red1, style=filled]
1113 -> 1117
1118 [label="const: 0.0",color=red1, style=filled]
1094 -> 1118
1119 [label="op2: /",color=green4, style=filled]
1093 -> 1119
1120 [label="op2: -",color=green4, style=filled]
1119 -> 1120
1121 [label="const: 0.0",color=red1, style=filled]
1120 -> 1121
1122 [label="op2: -",color=green4, style=filled]
1120 -> 1122
1123 [label="label: ?ownPositionZ",color=plum, style=filled]
1122 -> 1123
1124 [label="op2: *",color=green4, style=filled]
1123 -> 1124
1125 [label="ext_ownship_z_position_ft",color=cyan1, style=filled]
1124 -> 1125
1126 [label="const: 0.3048",color=red1, style=filled]
1124 -> 1126
1127 [label="label: ?intPositionZ",color=plum, style=filled]
1122 -> 1127
1128 [label="op2: *",color=green4, style=filled]
1127 -> 1128
1129 [label="ext_intruder_z_position_ft",color=cyan1, style=filled]
1128 -> 1129
1130 [label="const: 0.3048",color=red1, style=filled]
1128 -> 1130
1131 [label="op2: -",color=green4, style=filled]
1119 -> 1131
1132 [label="label: ?ownVelocityZ",color=plum, style=filled]
1131 -> 1132
1133 [label="op2: /",color=green4, style=filled]
1132 -> 1133
1134 [label="op2: *",color=green4, style=filled]
1133 -> 1134
1135 [label="ext_ownship_vz",color=cyan1, style=filled]
1134 -> 1135
1136 [label="const: 0.3048",color=red1, style=filled]
1134 -> 1136
1137 [label="const: 1.0",color=red1, style=filled]
1133 -> 1137
1138 [label="label: ?intVelocityZ",color=plum, style=filled]
1131 -> 1138
1139 [label="op2: /",color=green4, style=filled]
1138 -> 1139
1140 [label="op2: *",color=green4, style=filled]
1139 -> 1140
1141 [label="ext_intruder_vz",color=cyan1, style=filled]
1140 -> 1141
1142 [label="const: 0.3048",color=red1, style=filled]
1140 -> 1142
1143 [label="const: 1.0",color=red1, style=filled]
1139 -> 1143
1144 [label="const: -1.0",color=red1, style=filled]
1093 -> 1144
1145 [label="const: 30.0",color=red1, style=filled]
1091 -> 1145


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == ((((((((((ext_sqrt_8)) <= ((1852.0)))) || ((((((ext_sqrt_9)) <= ((1852.0)))) && (((((0.0) <= ((( (((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))) < (0.0))) ? (((((0.0) - ((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))))))))))) / (((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))) : (-1.0)))))) && ((((( (((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))) < (0.0))) ? (((((0.0) - ((((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))))))))))) / (((((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_x_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vx) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vx) * (0.3048))) / (1.0)))))))) + ((((((((ext_ownship_x_position_ft) * (0.3048)))) - ((((ext_intruder_y_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vy) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vy) * (0.3048))) / (1.0))))))))))))) : (-1.0)))) <= (30.0)))))))))) && (((((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) > 0)? ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) : -((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048))))))) <= (144.78))) || (((((0.0) <= ((( ((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) < (0.0))) ? (((((0.0) - ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))))) / ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) : (-1.0)))))) && ((((( ((((((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))) * ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) < (0.0))) ? (((((0.0) - ((((((ext_ownship_z_position_ft) * (0.3048)))) - ((((ext_intruder_z_position_ft) * (0.3048)))))))) / ((((((((ext_ownship_vz) * (0.3048))) / (1.0)))) - ((((((ext_intruder_vz) * (0.3048))) / (1.0)))))))) : (-1.0)))) <= (30.0)))))))))));
*/
SBool trigger_guard_alert_WCVtau(const SDouble ext_sqrt_8,
                                 const SDouble ext_ownship_x_position_ft,
                                 const SDouble ext_intruder_x_position_ft,
                                 const SDouble ext_intruder_y_position_ft, const SDouble ext_sqrt_9,
                                 const SDouble ext_ownship_vx, const SDouble ext_intruder_vx,
                                 const SDouble ext_ownship_vy, const SDouble ext_intruder_vy,
                                 const SDouble ext_ownship_z_position_ft,
                                 const SDouble ext_intruder_z_position_ft,
                                 const SDouble ext_ownship_vz, const SDouble ext_intruder_vz)
{
  const SDouble s0 = ext_sqrt_8;
  const SDouble s1 = ext_ownship_x_position_ft;
  const SDouble s2 = ext_intruder_x_position_ft;
  const SDouble s3 = ext_intruder_y_position_ft;
  const SDouble s4 = ext_sqrt_9;
  const SDouble s5 = ext_ownship_vx;
  const SDouble s6 = ext_intruder_vx;
  const SDouble s7 = ext_ownship_vy;
  const SDouble s8 = ext_intruder_vy;
  const SDouble s9 = ext_ownship_z_position_ft;
  const SDouble s10 = ext_intruder_z_position_ft;
  const SDouble s11 = ext_ownship_vz;
  const SDouble s12 = ext_intruder_vz;
  const SDouble s13 = s0 /* ?norm2dim */;
  const SBool   s15 = s13 <= 1852.0;
  const SDouble s16 = s4 /* ?norm2dim */;
  const SBool   s17 = s16 <= 1852.0;
  const SDouble s20 = s1 * 0.3048;
  const SDouble s21 = s20 /* ?ownPositionX */;
  const SDouble s22 = s2 * 0.3048;
  const SDouble s23 = s22 /* ?intPositionX */;
  const SDouble s24 = s21 - s23;
  const SDouble s25 = s5 * 0.3048;
  const SDouble s27 = s25 / 1.0;
  const SDouble s28 = s27 /* ?ownVelocityX */;
  const SDouble s29 = s6 * 0.3048;
  const SDouble s30 = s29 / 1.0;
  const SDouble s31 = s30 /* ?intVelocityX */;
  const SDouble s32 = s28 - s31;
  const SDouble s33 = s24 * s32;
  const SDouble s34 = s20 /* ?ownPositionY */;
  const SDouble s35 = s3 * 0.3048;
  const SDouble s36 = s35 /* ?intPositionY */;
  const SDouble s37 = s34 - s36;
  const SDouble s38 = s7 * 0.3048;
  const SDouble s39 = s38 / 1.0;
  const SDouble s40 = s39 /* ?ownVelocityY */;
  const SDouble s41 = s8 * 0.3048;
  const SDouble s42 = s41 / 1.0;
  const SDouble s43 = s42 /* ?intVelocityY */;
  const SDouble s44 = s40 - s43;
  const SDouble s45 = s37 * s44;
  const SDouble s46 = s33 + s45;
  const SDouble s47 = s46 /* ?scalar2dim */;
  const SBool   s48 = s47 < 0.0;
  const SDouble s49 = s24 * s24;
  const SDouble s50 = s37 * s37;
  const SDouble s51 = s49 + s50;
  const SDouble s52 = s51 /* ?scalar2dim */;
  const SDouble s53 = s52 /* ?normsq2dim */;
  const SDouble s54 = 0.0 - s53;
  const SDouble s55 = s54 / s47;
  const SDouble s57 = s48 ? s55 : -1.0;
  const SDouble s58 = s57 /* ?tau */;
  const SBool   s59 = 0.0 <= s58;
  const SBool   s61 = s58 <= 30.0;
  const SBool   s62 = s59 && s61;
  const SBool   s63 = s17 && s62;
  const SBool   s64 = s15 || s63;
  const SBool   s65 = s64 /* ?horizontalWCV */;
  const SDouble s66 = s9 * 0.3048;
  const SDouble s67 = s66 /* ?ownPositionZ */;
  const SDouble s68 = s10 * 0.3048;
  const SDouble s69 = s68 /* ?intPositionZ */;
  const SDouble s70 = s67 - s69;
  const SDouble s71 = fabs(s70);
  const SBool   s73 = s71 <= 144.78;
  const SDouble s74 = s11 * 0.3048;
  const SDouble s75 = s74 / 1.0;
  const SDouble s76 = s75 /* ?ownVelocityZ */;
  const SDouble s77 = s12 * 0.3048;
  const SDouble s78 = s77 / 1.0;
  const SDouble s79 = s78 /* ?intVelocityZ */;
  const SDouble s80 = s76 - s79;
  const SDouble s81 = s70 * s80;
  const SBool   s82 = s81 < 0.0;
  const SDouble s83 = 0.0 - s70;
  const SDouble s84 = s83 / s80;
  const SDouble s85 = s82 ? s84 : -1.0;
  const SDouble s86 = s85 /* ?tcoa */;
  const SBool   s87 = 0.0 <= s86;
  const SBool   s88 = s86 <= 30.0;
  const SBool   s89 = s87 && s88;
  const SBool   s90 = s73 || s89;
  const SBool   s91 = s90 /* ?verticalWCV */;
  const SBool   s92 = s65 && s91;
  const SBool   s93 = s92 /* ?wellClearViolation */;

  return s93;
}
