package calculadoradeip;

import static javafx.application.Application.launch;
import javax.swing.JTextField;

public class calcGui extends javax.swing.JFrame {

    public calcGui() {
        initComponents();
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jTextField2 = new javax.swing.JTextField();
        jTextField3 = new javax.swing.JTextField();
        jTextField5 = new javax.swing.JTextField();
        jLabel9 = new javax.swing.JLabel();
        iptxt5 = new javax.swing.JTextField();
        jLabel11 = new javax.swing.JLabel();
        iptxt6 = new javax.swing.JTextField();
        jLabel12 = new javax.swing.JLabel();
        iptxt7 = new javax.swing.JTextField();
        jLabel13 = new javax.swing.JLabel();
        iptxt8 = new javax.swing.JTextField();
        jScrollPane2 = new javax.swing.JScrollPane();
        jTextPane2 = new javax.swing.JTextPane();
        jPanel1 = new javax.swing.JPanel();
        btnCalc = new javax.swing.JButton();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        iptxt2 = new javax.swing.JTextField();
        iptxt4 = new javax.swing.JTextField();
        iptxt3 = new javax.swing.JTextField();
        jLabel7 = new javax.swing.JLabel();
        jLabel10 = new javax.swing.JLabel();

        iptxt1 = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        ndptxt1 = new javax.swing.JTextField();
        jLabel14 = new javax.swing.JLabel();
        ndptxt2 = new javax.swing.JTextField();
        jLabel15 = new javax.swing.JLabel();
        ndptxt3 = new javax.swing.JTextField();
        jLabel16 = new javax.swing.JLabel();
        ndptxt4 = new javax.swing.JTextField();
        cidrtxt = new javax.swing.JTextField();
        btnClean = new javax.swing.JButton();
        jLabel6 = new javax.swing.JLabel();
        binlbl = new javax.swing.JLabel();
        iperrlbl = new javax.swing.JLabel();
        ndperrlbl = new javax.swing.JLabel();
        srlbl = new javax.swing.JLabel();
        hostslbl = new javax.swing.JLabel();
        cidrlbl = new javax.swing.JLabel();
        jLabel17 = new javax.swing.JLabel();
        classiplbl = new javax.swing.JLabel();
        btnCalc2 = new javax.swing.JButton();

        jTextField2.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jTextField2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextField2ActionPerformed(evt);
            }
        });

        jTextField3.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jTextField3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextField3ActionPerformed(evt);
            }
        });

        jTextField5.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jTextField5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jTextField5ActionPerformed(evt);
            }
        });

        jLabel9.setText(".");

        iptxt5.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt5ActionPerformed(evt);
            }
        });

        jLabel11.setText(".");

        iptxt6.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt6.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt6ActionPerformed(evt);
            }
        });

        jLabel12.setText(".");

        iptxt7.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt7.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt7ActionPerformed(evt);
            }
        });

        jLabel13.setText(".");

        iptxt8.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt8ActionPerformed(evt);
            }
        });

        jScrollPane2.setViewportView(jTextPane2);

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Calculadora de IP");
        setResizable(false);

        btnCalc.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        btnCalc.setText("Calcular");
        btnCalc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCalcActionPerformed(evt);
            }
        });

        jLabel1.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel1.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel1.setText("IP:");

        jLabel2.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel2.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel2.setText("NDP:");

        jLabel3.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel3.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel3.setText("CIDR:   /");

        jLabel4.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel4.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel4.setText("SR:");

        jLabel5.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel5.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel5.setText("Hosts:");

        iptxt2.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt2ActionPerformed(evt);
            }
        });

        iptxt4.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt4ActionPerformed(evt);
            }
        });

        iptxt3.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt3ActionPerformed(evt);
            }
        });

        jLabel7.setText(".");

        jLabel10.setText(".");

        iptxt1.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        iptxt1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                iptxt1ActionPerformed(evt);
            }
        });

        jLabel8.setText(".");

        ndptxt1.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        ndptxt1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ndptxt1ActionPerformed(evt);
            }
        });

        jLabel14.setText(".");

        ndptxt2.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        ndptxt2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ndptxt2ActionPerformed(evt);
            }
        });

        jLabel15.setText(".");

        ndptxt3.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        ndptxt3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ndptxt3ActionPerformed(evt);
            }
        });

        jLabel16.setText(".");

        ndptxt4.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        ndptxt4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ndptxt4ActionPerformed(evt);
            }
        });

        cidrtxt.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        cidrtxt.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cidrtxtActionPerformed(evt);
            }
        });

        btnClean.setFont(new java.awt.Font("Tahoma", 0, 12)); // NOI18N
        btnClean.setText("Limpar");
        btnClean.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCleanActionPerformed(evt);
            }
        });

        jLabel6.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel6.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel6.setText("Classe IP:");

        binlbl.setVerticalAlignment(javax.swing.SwingConstants.TOP);

        srlbl.setVerticalAlignment(javax.swing.SwingConstants.TOP);

        hostslbl.setVerticalAlignment(javax.swing.SwingConstants.TOP);

        jLabel17.setFont(new java.awt.Font("Tahoma", 0, 14)); // NOI18N
        jLabel17.setHorizontalAlignment(javax.swing.SwingConstants.RIGHT);
        jLabel17.setText("Binário:");

        classiplbl.setVerticalAlignment(javax.swing.SwingConstants.TOP);

        btnCalc2.setLabel("Calcular com CIDR");
        btnCalc2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnCalc2ActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 85, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 37, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addGap(18, 18, 18))
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                                .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 85, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(2, 2, 2)))
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(ndptxt1, javax.swing.GroupLayout.DEFAULT_SIZE, 45, Short.MAX_VALUE)
                                    .addComponent(cidrtxt))
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addGap(6, 6, 6)
                                        .addComponent(jLabel14, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(ndptxt2, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                        .addComponent(jLabel15, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(2, 2, 2)
                                        .addComponent(ndptxt3, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(7, 7, 7)
                                        .addComponent(jLabel16, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(1, 1, 1)
                                        .addComponent(ndptxt4, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addGap(18, 18, 18)
                                        .addComponent(cidrlbl, javax.swing.GroupLayout.PREFERRED_SIZE, 71, javax.swing.GroupLayout.PREFERRED_SIZE))))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(iptxt1, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jLabel8, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(iptxt2, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addComponent(jLabel7, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(2, 2, 2)
                                .addComponent(iptxt3, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(7, 7, 7)
                                .addComponent(jLabel10, javax.swing.GroupLayout.PREFERRED_SIZE, 10, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(1, 1, 1)
                                .addComponent(iptxt4, javax.swing.GroupLayout.PREFERRED_SIZE, 45, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(18, 18, 18)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(iperrlbl, javax.swing.GroupLayout.DEFAULT_SIZE, 190, Short.MAX_VALUE)
                            .addComponent(ndperrlbl, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(27, 27, 27)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                .addComponent(jLabel5, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(jLabel4, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                            .addComponent(jLabel6)
                            .addComponent(jLabel17))
                        .addGap(18, 18, 18)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(binlbl, javax.swing.GroupLayout.PREFERRED_SIZE, 303, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(btnCalc, javax.swing.GroupLayout.DEFAULT_SIZE, 124, Short.MAX_VALUE)
                                    .addComponent(btnCalc2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(btnClean, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                .addGap(17, 17, 17))
                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                .addComponent(classiplbl, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 177, Short.MAX_VALUE)
                                .addComponent(hostslbl, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(srlbl, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))))
                .addContainerGap(19, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(40, 40, 40)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(iperrlbl, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                                .addComponent(iptxt4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addComponent(iptxt3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addComponent(jLabel7)
                                .addComponent(jLabel10)
                                .addComponent(iptxt1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addComponent(jLabel8)
                                .addComponent(jLabel1)
                                .addComponent(iptxt2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(18, 18, 18)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                .addComponent(jLabel2)
                                .addComponent(ndptxt1, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addComponent(ndperrlbl, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(ndptxt4, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(ndptxt3, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(jLabel15)
                        .addComponent(jLabel16)
                        .addComponent(jLabel14)
                        .addComponent(ndptxt2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(cidrlbl, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(jLabel3)
                        .addComponent(cidrtxt, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addGap(0, 128, Short.MAX_VALUE)
                .addComponent(btnCalc, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(btnCalc2)
                .addGap(20, 20, 20)
                .addComponent(btnClean)
                .addGap(23, 23, 23))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel4)
                    .addComponent(srlbl, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel5)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addComponent(hostslbl, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel6)
                            .addComponent(classiplbl, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(24, 24, 24)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel17)
                            .addComponent(binlbl, javax.swing.GroupLayout.PREFERRED_SIZE, 23, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addGap(104, 104, 104))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    
    private void jTextField2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextField2ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextField2ActionPerformed

    private void jTextField3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextField3ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextField3ActionPerformed

    private void jTextField5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jTextField5ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jTextField5ActionPerformed

    private void iptxt5ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt5ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt5ActionPerformed

    private void iptxt6ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt6ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt6ActionPerformed

    private void iptxt7ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt7ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt7ActionPerformed

    private void iptxt8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt8ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt8ActionPerformed

    private void btnCleanActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCleanActionPerformed
        zerar();
    }//GEN-LAST:event_btnCleanActionPerformed

    private void cidrtxtActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cidrtxtActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_cidrtxtActionPerformed

    private void ndptxt4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ndptxt4ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ndptxt4ActionPerformed

    private void ndptxt3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ndptxt3ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ndptxt3ActionPerformed

    private void ndptxt2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ndptxt2ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ndptxt2ActionPerformed

    private void ndptxt1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ndptxt1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_ndptxt1ActionPerformed

    private void iptxt1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt1ActionPerformed

    private void iptxt3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt3ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt3ActionPerformed

    private void iptxt4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt4ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt4ActionPerformed

    private void iptxt2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_iptxt2ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_iptxt2ActionPerformed

    private void btnCalcActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCalcActionPerformed
        srlbl.setText("");
        hostslbl.setText("");
        binlbl.setText("");
        classiplbl.setText("");
        iperrlbl.setText("");
        ndperrlbl.setText("");
        
        int[] ip = null;
        int[] ndp;
        String classe = "X";
        boolean valido; //VERIFICADOR SE É UM NUMERO VALIDO PARA IP
        // IP
        boolean nulo = checkBlank(iptxt1, iptxt2, iptxt3, iptxt4); // VERIFICA SE ESTÁ EM BRANCO
        
        if(nulo == false){ // SE NAO ESTIVER EM BRANCO CONTINUA
            ip = conversor(iptxt1, iptxt2, iptxt3, iptxt4);
            valido = validar(ip);
            
            classe = classeIp(ip);
            if(valido==true){
                if("L".equals(classe)){
                    classiplbl.setText("LocalHost");
                }else{
                    classiplbl.setText(classe);
                }
            }
            
        }else{
            iperrlbl.setText("IP em Branco");
            classiplbl.setText("IP Inválido");
        }
        // NDP
        boolean nulo2 = checkBlank(ndptxt1, ndptxt2, ndptxt3, ndptxt4);
        boolean alri = true;
        boolean nulo3 = true;
        String[] ndpCi;
        ndpCi = new String[32];
        int xi = 0;
        String bls1 = "";
        String bls2 = "";
        String bls3 = "";
        String bls4 = "";
        
        int cidra;
        if(!"".equals(cidrtxt.getText())){
            cidra = Integer.parseInt(cidrtxt.getText());
            if(cidra >=8 && cidra <= 32){
                while(xi < cidra){
                    ndpCi[xi] = "1";
                    xi++;
                }
                while(xi < 32){
                    ndpCi[xi] = "0";
                    xi++;
                }

                int oi = 0;
                while(oi<8){
                    bls1 = bls1 + ndpCi[oi];
                    oi++;
                }
                while(oi<16){
                    bls2 = bls2 + ndpCi[oi];
                    oi++;
                }
                while(oi<24){
                    bls3 = bls3 + ndpCi[oi];
                    oi++;
                }
                while(oi<32){
                    bls4 = bls4 + ndpCi[oi];
                    oi++;
                }
                if(nulo2 == true){
                    ndptxt1.setText(String.valueOf(Integer.parseInt(bls1, 2)));
                    ndptxt2.setText(String.valueOf(Integer.parseInt(bls2, 2)));
                    ndptxt3.setText(String.valueOf(Integer.parseInt(bls3, 2)));
                    ndptxt4.setText(String.valueOf(Integer.parseInt(bls4, 2)));
                    ndperrlbl.setText(Integer.parseInt(bls1, 2) + "." + Integer.parseInt(bls2, 2) + "." + Integer.parseInt(bls3, 2) + "." + Integer.parseInt(bls4, 2));
                    alri = false;
                }
                
            }
        }
        
        
        if(nulo2 == false || alri == false){ // SE NAO ESTIVER EM BRANCO CONTINUA
            ndp = conversor(ndptxt1, ndptxt2, ndptxt3, ndptxt4);
            valido = validarndp(ndp);
            if(valido == true && nulo == false){
                ndpVer(ip, classe);
            }
            ndpExec(ndp, classe);
            cidrtxt.setText(cidrlbl.getText());
            cidrlbl.setText("");
        }else{
            if(ndperrlbl.getText().equals("")){
                ndperrlbl.setText("NDP em Branco");
            }
            binlbl.setText("NDP Inválido");
        }
        
    }//GEN-LAST:event_btnCalcActionPerformed

    private void btnCalc2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnCalc2ActionPerformed
        srlbl.setText("");
        hostslbl.setText("");
        binlbl.setText("");
        classiplbl.setText("");
        iperrlbl.setText("");
        ndperrlbl.setText("");
        
        int[] ip = null;
        int[] ndp;
        String classe = "X";
        boolean valido; //VERIFICADOR SE É UM NUMERO VALIDO PARA IP
        // IP
        boolean nulo = checkBlank(iptxt1, iptxt2, iptxt3, iptxt4); // VERIFICA SE ESTÁ EM BRANCO
        
        if(nulo == false){ // SE NAO ESTIVER EM BRANCO CONTINUA
            ip = conversor(iptxt1, iptxt2, iptxt3, iptxt4);
            valido = validar(ip);
            
            classe = classeIp(ip);
            if(valido==true){
                if("L".equals(classe)){
                    classiplbl.setText("LocalHost");
                }else{
                    classiplbl.setText(classe);
                }
            }
            
        }else{
            iperrlbl.setText("IP em Branco");
            classiplbl.setText("IP Inválido");
        }
        // NDP
        boolean nulo2 = checkBlank(ndptxt1, ndptxt2, ndptxt3, ndptxt4);
        boolean alri = true;
        String[] ndpCi;
        ndpCi = new String[32];
        int xi = 0;
        String bls1 = "";
        String bls2 = "";
        String bls3 = "";
        String bls4 = "";
        
        int cidra;
        if(!"".equals(cidrtxt.getText())){
            cidra = Integer.parseInt(cidrtxt.getText());
            if(cidra >=8 && cidra <= 32){
                while(xi < cidra){
                    ndpCi[xi] = "1";
                    xi++;
                }
                while(xi < 32){
                    ndpCi[xi] = "0";
                    xi++;
                }

                int oi = 0;
                while(oi<8){
                    bls1 = bls1 + ndpCi[oi];
                    oi++;
                }
                while(oi<16){
                    bls2 = bls2 + ndpCi[oi];
                    oi++;
                }
                while(oi<24){
                    bls3 = bls3 + ndpCi[oi];
                    oi++;
                }
                while(oi<32){
                    bls4 = bls4 + ndpCi[oi];
                    oi++;
                }
                
                ndptxt1.setText(String.valueOf(Integer.parseInt(bls1, 2)));
                ndptxt2.setText(String.valueOf(Integer.parseInt(bls2, 2)));
                ndptxt3.setText(String.valueOf(Integer.parseInt(bls3, 2)));
                ndptxt4.setText(String.valueOf(Integer.parseInt(bls4, 2)));
                alri = false;
                
                ndperrlbl.setText(Integer.parseInt(bls1, 2) + "." + Integer.parseInt(bls2, 2) + "." + Integer.parseInt(bls3, 2) + "." + Integer.parseInt(bls4, 2));
            }
        }
        if(nulo2 == false || alri == false){ // SE NAO ESTIVER EM BRANCO CONTINUA
            ndp = conversor(ndptxt1, ndptxt2, ndptxt3, ndptxt4);
            valido = validarndp(ndp);
            if(valido == true && nulo == false){
                ndpVer(ip, classe);
            }
            ndpExec(ndp, classe);
            cidrlbl.setText("");
            ndperrlbl.setText("");
        }else{
            if(ndperrlbl.getText().equals("")){
                ndperrlbl.setText("NDP em Branco");
            }
            binlbl.setText("NDP Inválido");
        }

    }//GEN-LAST:event_btnCalc2ActionPerformed
  
    
    public static void main(String args[]) {
       
        java.awt.EventQueue.invokeLater(() -> {
            new calcGui().setVisible(true);
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel binlbl;
    private javax.swing.JButton btnCalc;
    private javax.swing.JButton btnCalc2;
    private javax.swing.JButton btnClean;
    private javax.swing.JLabel cidrlbl;
    private javax.swing.JTextField cidrtxt;
    private javax.swing.JLabel classiplbl;
    private javax.swing.JLabel hostslbl;
    private javax.swing.JLabel iperrlbl;
    private javax.swing.JTextField iptxt1;
    private javax.swing.JTextField iptxt2;
    private javax.swing.JTextField iptxt3;
    private javax.swing.JTextField iptxt4;
    private javax.swing.JTextField iptxt5;
    private javax.swing.JTextField iptxt6;
    private javax.swing.JTextField iptxt7;
    private javax.swing.JTextField iptxt8;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel12;
    private javax.swing.JLabel jLabel13;
    private javax.swing.JLabel jLabel14;
    private javax.swing.JLabel jLabel15;
    private javax.swing.JLabel jLabel16;
    private javax.swing.JLabel jLabel17;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JTextField jTextField2;
    private javax.swing.JTextField jTextField3;
    private javax.swing.JTextField jTextField5;
    private javax.swing.JTextPane jTextPane2;
    private javax.swing.JLabel ndperrlbl;
    private javax.swing.JTextField ndptxt1;
    private javax.swing.JTextField ndptxt2;
    private javax.swing.JTextField ndptxt3;
    private javax.swing.JTextField ndptxt4;
    private javax.swing.JLabel srlbl;
    // End of variables declaration//GEN-END:variables

    private int[] conversor(JTextField txt1, JTextField txt2, JTextField txt3, JTextField txt4) {
        int[] ip = {0,0,0,0};
        
        ip[0] = Integer.parseInt(txt1.getText());
        ip[1] = Integer.parseInt(txt2.getText());
        ip[2] = Integer.parseInt(txt3.getText());
        ip[3] = Integer.parseInt(txt4.getText());

        return ip;
    }

    private boolean validar(int[] ip) {
        for (int i = 0; i < 4; i++) {
            if(ip[i] < 0 || ip[i] > 255){
                iperrlbl.setText((i+1) + "º Octeto Inválido");
                classiplbl.setText("IP Inválido");
                return false;
            }
        }
        return true;
    }
    
    private boolean validarndp(int[] ndp) {
        if(ndp[0] < 255){
            ndperrlbl.setText("1º Octeto Inválido");
            binlbl.setText("NDP Inválido");
            return false;
        }
        for (int i = 0; i < 4; i++) {
            if(ndp[i] < 0 || ndp[i] > 255){
                ndperrlbl.setText((i+1) + "º Octeto Inválido");
                classiplbl.setText("NDP Inválido");
                return false;
            }
        }
        return true;
    }

    private boolean checkBlank(JTextField iptxt1, JTextField iptxt2, JTextField iptxt3, JTextField iptxt4) {
        
        return iptxt1.getText().equals("") || iptxt2.getText().equals("") || iptxt3.getText().equals("") || iptxt4.getText().equals("");
    }

    private String classeIp(int[] ip) {
        
        if(ip[0] <= 126){
            return "A";
        }else if(ip[0] == 127){
            return "L";
        }else if(ip[0] < 192){
            return "B";
        }else if(ip[0] < 224){
            return "C";
        }else if(ip[0] < 240){
            return "D";
        }else{
            return "E";
        }
    }

    private void zerar() {
      
        iptxt1.setText("");
        iptxt2.setText("");
        iptxt3.setText("");
        iptxt4.setText("");

        ndptxt1.setText("");
        ndptxt2.setText("");
        ndptxt3.setText("");
        ndptxt4.setText("");

        cidrtxt.setText("");
        srlbl.setText("");
        hostslbl.setText("");
        
        iperrlbl.setText("");
        ndperrlbl.setText("");
        cidrlbl.setText("");
        binlbl.setText("");
        classiplbl.setText("");
        
    }

    private void ndpExec(int[] ndp, String classe) {
        int x=0;
        for (int i : ndp) {
            if(i == 255 || i==254 || i==252 || i==248 || i==240 || i==224 || i==224 || i==192 || i== 128 || i==0){
                 x++;
            }else{
                ndperrlbl.setText((x+1) + "º Octeto Inválido!");
                binlbl.setText("NDP Inválido");
            }
        }
        if(binlbl.getText().equals("NDP Inválido") || ndperrlbl.getText().equals("NDP e IP não correspondem!")){
            return;
        }
        String ndp1 = Integer.toString(ndp[0], 2);
        String ndp2 = Integer.toString(ndp[1], 2);
        String ndp3 = Integer.toString(ndp[2], 2);
        String ndp4 = Integer.toString(ndp[3], 2);
        
        while(ndp2.length()<8){
            ndp2 = "0" + ndp2;
        }
        while(ndp3.length()<8){
            ndp3 = "0" + ndp3;
        }
        while(ndp4.length()<8){
            ndp4 = "0" + ndp4;
        }
        
        
        binlbl.setText( ndp1 + "." + ndp2 + "." + ndp3 + "." + ndp4);
        
        cidr(ndp1, ndp2, ndp3, ndp4, classe);
    }

    private void ndpVer(int[] ip, String classe) {
        
        if(classe.equals("A") && Integer.parseInt(ndptxt1.getText()) != 255){
            binlbl.setText("Classe A: R.H.H.H");
            ndperrlbl.setText("NDP e IP não correspondem!");
        }else if(classe.equals("B") && (Integer.parseInt(ndptxt1.getText()) != 255 || Integer.parseInt(ndptxt2.getText()) != 255)){
            binlbl.setText("Classe B: R.R.H.H");
            ndperrlbl.setText("NDP e IP não correspondem!");
        }else if(classe.equals("C") && (Integer.parseInt(ndptxt1.getText()) != 255 || Integer.parseInt(ndptxt2.getText()) != 255 || Integer.parseInt(ndptxt3.getText()) != 255)){
            binlbl.setText("Classe C: R.R.R.H");
            ndperrlbl.setText("NDP e IP não correspondem!");
        }
    }

    private void cidr(String ndp1, String ndp2, String ndp3, String ndp4, String classe) {
       int ci = 0;
        if(ndp1.equals("11111111")){
           ci+=8;
        }
        switch (ndp2) {
            case "11111111":
                ci+=8;
                break;
            case "11111110":
                ci+=7;
                break;
            case "11111100":
                ci+=6;
                break;
            case "11111000":
                ci+=5;
                break;
            case "11110000":
                ci+=4;
                break;
            case "11100000":
                ci+=3;
                break;
            case "11000000":
                ci+=2;
                break;
            case "10000000":
                ci+=1;
                break;
            case "00000000":
                ci+=0;
                break;
            default:
                break;
        }
        switch (ndp3) {
            case "11111111":
                ci+=8;
                break;
            case "11111110":
                ci+=7;
                break;
            case "11111100":
                ci+=6;
                break;
            case "11111000":
                ci+=5;
                break;
            case "11110000":
                ci+=4;
                break;
            case "11100000":
                ci+=3;
                break;
            case "11000000":
                ci+=2;
                break;
            case "10000000":
                ci+=1;
                break;
            case "00000000":
                ci+=0;
                break;
            default:
                break;
        }
        switch (ndp4) {
            case "11111111":
                ci+=8;
                break;
            case "11111110":
                ci+=7;
                break;
            case "11111100":
                ci+=6;
                break;
            case "11111000":
                ci+=5;
                break;
            case "11110000":
                ci+=4;
                break;
            case "11100000":
                ci+=3;
                break;
            case "11000000":
                ci+=2;
                break;
            case "10000000":
                ci+=1;
                break;
            case "00000000":
                ci+=0;
                break;
            default:
                break;
        }
        cidrlbl.setText(String.valueOf(ci));
        srHostCalc(ci, classe);
    }

    private void srHostCalc(int ci, String classe) {
        int subRede = 1;
        int host = 0;
        int hs = ci;
        
        if(classe.equals("A") || classe.equals("B") || classe.equals("C")){
            if(ci == 8){
                host = (int) Math.pow(2, (32-ci));
            }else if(classe.equals("A")){
                while(ci>8){
                    subRede = subRede*2;
                    ci--;
                }
                host = (int) Math.pow(2, (32-hs));
            }else if(classe.equals("B")){
                while(ci>16){
                    subRede = subRede*2;
                    ci--;
                }
                host = (int) Math.pow(2, (32-hs));
            }else if(classe.equals("C")){
                while(ci>24){
                    subRede = subRede*2;
                    ci--;
                }
                host = (int) Math.pow(2, (32-hs));
            }
            
            srlbl.setText(String.valueOf(subRede));
            if(host-2 < 0){
                hostslbl.setText("0");
            }else{
                hostslbl.setText(String.valueOf(host-2));
            }
        }else{
            srlbl.setText("IP necessário");
            hostslbl.setText("IP necessário");
        }
    }
}
