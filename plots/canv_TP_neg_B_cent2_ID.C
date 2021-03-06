{
//=========Macro generated from canvas: canv_TP_neg_B_cent2_ID/canv_TP_neg_B_cent2_ID
//=========  (Mon Aug 25 21:09:28 2014) by ROOT version5.34/19
   TCanvas *canv_TP_neg_B_cent2_ID = new TCanvas("canv_TP_neg_B_cent2_ID", "canv_TP_neg_B_cent2_ID",0,0,700,500);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canv_TP_neg_B_cent2_ID->Range(0,0,1,1);
   canv_TP_neg_B_cent2_ID->SetFillColor(0);
   canv_TP_neg_B_cent2_ID->SetBorderMode(0);
   canv_TP_neg_B_cent2_ID->SetBorderSize(2);
   canv_TP_neg_B_cent2_ID->SetTickx(1);
   canv_TP_neg_B_cent2_ID->SetTicky(1);
   canv_TP_neg_B_cent2_ID->SetLeftMargin(0.16);
   canv_TP_neg_B_cent2_ID->SetRightMargin(0.05);
   canv_TP_neg_B_cent2_ID->SetTopMargin(0.05);
   canv_TP_neg_B_cent2_ID->SetBottomMargin(0.16);
   canv_TP_neg_B_cent2_ID->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "c_1",0,0.008474576,1,0.9915254);
   c_1->Draw();
   c_1->cd();
   c_1->Range(-3.5,-2446.54,2.827273,3258.188);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetTickx(1);
   c_1->SetTicky(1);
   c_1->SetLeftMargin(0.158046);
   c_1->SetRightMargin(0.05172414);
   c_1->SetTopMargin(0.04525862);
   c_1->SetBottomMargin(0.4288793);
   c_1->SetFrameBorderMode(0);
   Double_t xAxis89[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_ID_hNegEff_pt0_cent2_total__89 = new TH1D("data_B_ID_hNegEff_pt0_cent2_total__89","mu^{-},eff,all eta (total)",11, xAxis89);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(1,14);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(2,9);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(3,9);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(4,17);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(5,15);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(6,3);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(7,22);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(8,13);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(9,13);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(10,10);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetBinContent(11,12);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetMinimum(0.1);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetMaximum(27);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetEntries(137);
   data_B_ID_hNegEff_pt0_cent2_total__89->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   data_B_ID_hNegEff_pt0_cent2_total__89->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_ID_hNegEff_pt0_cent2_total__89->SetLineColor(ci);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_B_ID_hNegEff_pt0_cent2_total__89->GetXaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetXaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetXaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetXaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetYaxis()->SetTitle("Probes");
   data_B_ID_hNegEff_pt0_cent2_total__89->GetYaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetYaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetYaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetYaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetZaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetZaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetZaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__89->GetZaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__89->Draw("hist");
   Double_t xAxis90[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_ID_hNegEff_pt0_cent2_passed__90 = new TH1D("data_B_ID_hNegEff_pt0_cent2_passed__90","mu^{-},eff,all eta (passed)",11, xAxis90);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(1,14);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(2,8);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(3,9);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(4,14);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(5,14);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(6,3);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(7,18);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(8,10);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(9,11);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(10,6);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetBinContent(11,9);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetEntries(116);
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_ID_hNegEff_pt0_cent2_passed__90->SetLineColor(ci);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetXaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetXaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetXaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetXaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetYaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetYaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetYaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetYaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetZaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetZaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetZaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_passed__90->GetZaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_passed__90->Draw("histsame");
   Double_t xAxis91[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1D *data_B_ID_hNegEff_pt0_cent2_total__91 = new TH1D("data_B_ID_hNegEff_pt0_cent2_total__91","mu^{-},eff,all eta (total)",11, xAxis91);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(1,14);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(2,9);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(3,9);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(4,17);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(5,15);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(6,3);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(7,22);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(8,13);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(9,13);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(10,10);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetBinContent(11,12);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetMinimum(0.1);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetMaximum(27);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetEntries(137);
   data_B_ID_hNegEff_pt0_cent2_total__91->SetDirectory(0);

   ci = TColor::GetColor("#ff0000");
   data_B_ID_hNegEff_pt0_cent2_total__91->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   data_B_ID_hNegEff_pt0_cent2_total__91->SetLineColor(ci);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   data_B_ID_hNegEff_pt0_cent2_total__91->GetXaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetXaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetXaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetXaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetYaxis()->SetTitle("Probes");
   data_B_ID_hNegEff_pt0_cent2_total__91->GetYaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetYaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetYaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetYaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetZaxis()->SetLabelFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetZaxis()->SetLabelSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetZaxis()->SetTitleSize(0.035);
   data_B_ID_hNegEff_pt0_cent2_total__91->GetZaxis()->SetTitleFont(42);
   data_B_ID_hNegEff_pt0_cent2_total__91->Draw("sameaxis");
   TLatex *   tex = new TLatex(0.6221264,0.4892241,"ID(PeriodB), #mu^{-} 10-20%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04310345);
   tex->SetLineWidth(2);
   tex->Draw();
  
// ------------>Primitives in pad: c_2
   c_2 = new TPad("c_2", "c_2",0,0.00862069,1,0.4331897);
   c_2->Draw();
   c_2->cd();
   c_2->Range(-3.5,-0.08581081,2.827273,1.112162);
   c_2->SetFillColor(0);
   c_2->SetBorderMode(0);
   c_2->SetBorderSize(2);
   c_2->SetTickx(1);
   c_2->SetTicky(1);
   c_2->SetLeftMargin(0.158046);
   c_2->SetRightMargin(0.05172414);
   c_2->SetTopMargin(0.01015228);
   c_2->SetBottomMargin(0.2385787);
   c_2->SetFrameBorderMode(0);
   Double_t xAxis92[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TH1F *hdummy__92 = new TH1F("hdummy__92","hdummy",11, xAxis92);
   hdummy__92->SetMinimum(0.2);
   hdummy__92->SetMaximum(1.09);
   hdummy__92->SetDirectory(0);
   hdummy__92->SetStats(0);
   hdummy__92->SetLineWidth(2);
   hdummy__92->SetMarkerStyle(20);
   hdummy__92->SetMarkerSize(1.2);
   hdummy__92->GetXaxis()->SetTitle("#eta^{#mu}");
   hdummy__92->GetXaxis()->SetLabelFont(42);
   hdummy__92->GetXaxis()->SetLabelSize(0.07);
   hdummy__92->GetXaxis()->SetTitleSize(0.1);
   hdummy__92->GetXaxis()->SetTitleOffset(0.87);
   hdummy__92->GetXaxis()->SetTitleFont(42);
   hdummy__92->GetYaxis()->SetTitle("#epsilon");
   hdummy__92->GetYaxis()->SetLabelFont(42);
   hdummy__92->GetYaxis()->SetLabelSize(0.07);
   hdummy__92->GetYaxis()->SetTitleSize(0.09);
   hdummy__92->GetYaxis()->SetTitleOffset(0.44);
   hdummy__92->GetYaxis()->SetTitleFont(42);
   hdummy__92->GetZaxis()->SetLabelFont(42);
   hdummy__92->GetZaxis()->SetLabelSize(0.05);
   hdummy__92->GetZaxis()->SetTitleSize(0.05);
   hdummy__92->GetZaxis()->SetTitleFont(42);
   hdummy__92->Draw("");
   Double_t xAxis23[12] = {-2.5, -2.1, -1.55, -1.05, -0.6, -0.1, 0.1, 0.6, 1.05, 1.55, 2.1, 2.5}; 
   
   TEfficiency * data_B_ID_hNegEff_pt0_cent223 = new TEfficiency("data_B_ID_hNegEff_pt0_cent2","mu^{-},eff,all eta",11,xAxis23);
   
   data_B_ID_hNegEff_pt0_cent223->SetConfidenceLevel(0.6826895);
   data_B_ID_hNegEff_pt0_cent223->SetBetaAlpha(1);
   data_B_ID_hNegEff_pt0_cent223->SetBetaBeta(1);
   data_B_ID_hNegEff_pt0_cent223->SetWeight(0.08333333);
   data_B_ID_hNegEff_pt0_cent223->SetStatisticOption(0);
   data_B_ID_hNegEff_pt0_cent223->SetPosteriorMode(0);
   data_B_ID_hNegEff_pt0_cent223->SetShortestInterval(0);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(0,0);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(0,0);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(1,14);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(1,14);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(2,9);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(2,8);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(3,9);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(3,9);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(4,17);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(4,14);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(5,15);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(5,14);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(6,3);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(6,3);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(7,22);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(7,18);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(8,13);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(8,10);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(9,13);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(9,11);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(10,10);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(10,6);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(11,12);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(11,9);
   data_B_ID_hNegEff_pt0_cent223->SetTotalEvents(12,0);
   data_B_ID_hNegEff_pt0_cent223->SetPassedEvents(12,0);
   data_B_ID_hNegEff_pt0_cent223->SetFillColor(19);
   data_B_ID_hNegEff_pt0_cent223->Draw("pesame");
   c_2->Modified();
   c_1->cd();
   c_1->Modified();
   canv_TP_neg_B_cent2_ID->cd();
   canv_TP_neg_B_cent2_ID->Modified();
   canv_TP_neg_B_cent2_ID->cd();
   canv_TP_neg_B_cent2_ID->SetSelected(canv_TP_neg_B_cent2_ID);
}
