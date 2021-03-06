{
//=========Macro generated from canvas: cPosA_cent2/cPosA_cent2
//=========  (Thu Aug 14 17:54:28 2014) by ROOT version5.34/19
   TCanvas *cPosA_cent2 = new TCanvas("cPosA_cent2", "cPosA_cent2",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cPosA_cent2->Range(0,0,1,1);
   cPosA_cent2->SetFillColor(0);
   cPosA_cent2->SetBorderMode(0);
   cPosA_cent2->SetBorderSize(2);
   cPosA_cent2->SetTickx(1);
   cPosA_cent2->SetTicky(1);
   cPosA_cent2->SetLeftMargin(0.16);
   cPosA_cent2->SetRightMargin(0.05);
   cPosA_cent2->SetTopMargin(0.05);
   cPosA_cent2->SetBottomMargin(0.16);
   cPosA_cent2->SetFrameBorderMode(0);
   
   TH1F *hdummy = new TH1F("hdummy","hdummy",50,-2.5,2.5);
   hdummy->SetMinimum(0);
   hdummy->SetMaximum(1.1);
   hdummy->SetStats(0);
   hdummy->SetLineWidth(2);
   hdummy->SetMarkerStyle(20);
   hdummy->SetMarkerSize(1.2);
   hdummy->GetXaxis()->SetTitle("#eta_{lab}^{#mu}");
   hdummy->GetXaxis()->SetLabelFont(42);
   hdummy->GetXaxis()->SetLabelSize(0.05);
   hdummy->GetXaxis()->SetTitleSize(0.05);
   hdummy->GetXaxis()->SetTitleOffset(1.4);
   hdummy->GetXaxis()->SetTitleFont(42);
   hdummy->GetYaxis()->SetTitle("#epsilon");
   hdummy->GetYaxis()->SetLabelFont(42);
   hdummy->GetYaxis()->SetLabelSize(0.05);
   hdummy->GetYaxis()->SetTitleSize(0.05);
   hdummy->GetYaxis()->SetTitleOffset(1.4);
   hdummy->GetYaxis()->SetTitleFont(42);
   hdummy->GetZaxis()->SetLabelFont(42);
   hdummy->GetZaxis()->SetLabelSize(0.05);
   hdummy->GetZaxis()->SetTitleSize(0.05);
   hdummy->GetZaxis()->SetTitleFont(42);
   hdummy->Draw("");
   TLatex *   tex = new TLatex(0.4891954,0.2944915,"Period A, #mu^{+}, 10-20%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.4729885,0.2372881,"p_{T}^{#mu}>25GeV, p_{T}^{#nu}>25GeV, m_{T}>40 GeV");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2068966,0.875,"ATLAS Simulation");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.6342529,0.875,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph0");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#00ff00");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.8681894);
   grae->SetPointError(0,0.2,0.2,0.009871141,0.00929831);
   grae->SetPoint(1,-1.825,0.858184);
   grae->SetPointError(1,0.275,0.275,0.00684221,0.006581923);
   grae->SetPoint(2,-1.3,0.8380898);
   grae->SetPointError(2,0.25,0.25,0.006930382,0.006702327);
   grae->SetPoint(3,-0.825,0.9117254);
   grae->SetPointError(3,0.225,0.225,0.005646589,0.005343487);
   grae->SetPoint(4,-0.35,0.9128769);
   grae->SetPointError(4,0.25,0.25,0.005329826,0.005058353);
   grae->SetPoint(5,0,0.5256407);
   grae->SetPointError(5,0.1,0.1,0.01463475,0.01459102);
   grae->SetPoint(6,0.35,0.9282368);
   grae->SetPointError(6,0.25,0.25,0.005119176,0.004809011);
   grae->SetPoint(7,0.825,0.9389594);
   grae->SetPointError(7,0.225,0.225,0.005161382,0.004795556);
   grae->SetPoint(8,1.3,0.9160949);
   grae->SetPointError(8,0.25,0.25,0.005585515,0.005274332);
   grae->SetPoint(9,1.825,0.9149075);
   grae->SetPointError(9,0.275,0.275,0.005493248,0.005192434);
   grae->SetPoint(10,2.3,0.8993667);
   grae->SetPointError(10,0.2,0.2,0.007577328,0.007106263);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph1");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.8659777);
   grae->SetPointError(0,0.2,0.2,0.009932805,0.009363399);
   grae->SetPoint(1,-1.825,0.8556023);
   grae->SetPointError(1,0.275,0.275,0.006890177,0.006631785);
   grae->SetPoint(2,-1.3,0.8331126);
   grae->SetPointError(2,0.25,0.25,0.007009202,0.006784493);
   grae->SetPoint(3,-0.825,0.9048031);
   grae->SetPointError(3,0.225,0.225,0.005828173,0.005530486);
   grae->SetPoint(4,-0.35,0.9078199);
   grae->SetPointError(4,0.25,0.25,0.005456793,0.005188809);
   grae->SetPoint(5,0,0.5221559);
   grae->SetPointError(5,0.1,0.1,0.01463648,0.01459835);
   grae->SetPoint(6,0.35,0.9224458);
   grae->SetPointError(6,0.25,0.25,0.005289061,0.004983362);
   grae->SetPoint(7,0.825,0.9335714);
   grae->SetPointError(7,0.225,0.225,0.005350416,0.004989713);
   grae->SetPoint(8,1.3,0.9122678);
   grae->SetPointError(8,0.25,0.25,0.005691997,0.005383984);
   grae->SetPoint(9,1.825,0.9107782);
   grae->SetPointError(9,0.275,0.275,0.005602222,0.005304547);
   grae->SetPoint(10,2.3,0.8975344);
   grae->SetPointError(10,0.2,0.2,0.00763474,0.007166164);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph2");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(23);
   grae->SetMarkerSize(1.2);
   grae->SetPoint(0,-2.3,0.8625407);
   grae->SetPointError(0,0.2,0.2,0.01002663,0.009462502);
   grae->SetPoint(1,-1.825,0.8539581);
   grae->SetPointError(1,0.275,0.275,0.006920497,0.006663321);
   grae->SetPoint(2,-1.3,0.8325582);
   grae->SetPointError(2,0.25,0.25,0.007018315,0.006794015);
   grae->SetPoint(3,-0.825,0.9040084);
   grae->SetPointError(3,0.225,0.225,0.005847017,0.005549879);
   grae->SetPoint(4,-0.35,0.9078199);
   grae->SetPointError(4,0.25,0.25,0.005456793,0.005188809);
   grae->SetPoint(5,0,0.5221559);
   grae->SetPointError(5,0.1,0.1,0.01463648,0.01459835);
   grae->SetPoint(6,0.35,0.9223413);
   grae->SetPointError(6,0.25,0.25,0.005291633,0.004985995);
   grae->SetPoint(7,0.825,0.9333397);
   grae->SetPointError(7,0.225,0.225,0.005357608,0.004997062);
   grae->SetPoint(8,1.3,0.9116476);
   grae->SetPointError(8,0.25,0.25,0.005709423,0.005401958);
   grae->SetPoint(9,1.825,0.9097229);
   grae->SetPointError(9,0.275,0.275,0.005628902,0.005331989);
   grae->SetPoint(10,2.3,0.8948734);
   grae->SetPointError(10,0.2,0.2,0.007715197,0.007250086);
   grae->Draw("pe ");
   
   grae = new TGraphAsymmErrors(11);
   grae->SetName("Graph3");
   grae->SetTitle("Graph");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(33);
   grae->SetMarkerSize(1.6);
   grae->SetPoint(0,-2.3,0.7519436);
   grae->SetPointError(0,0.2,0.2,0.01231469,0.01192372);
   grae->SetPoint(1,-1.825,0.8031501);
   grae->SetPointError(1,0.275,0.275,0.007739163,0.007519728);
   grae->SetPoint(2,-1.3,0.7537704);
   grae->SetPointError(2,0.25,0.25,0.008034655,0.007864574);
   grae->SetPoint(3,-0.825,0.6575816);
   grae->SetPointError(3,0.225,0.225,0.009144461,0.009030115);
   grae->SetPoint(4,-0.35,0.7463788);
   grae->SetPointError(4,0.25,0.25,0.007995077,0.007835755);
   grae->SetPoint(5,0,0.3353063);
   grae->SetPointError(5,0.1,0.1,0.01370257,0.01397845);
   grae->SetPoint(6,0.35,0.7708236);
   grae->SetPointError(6,0.25,0.25,0.008075106,0.007881104);
   grae->SetPoint(7,0.825,0.6548343);
   grae->SetPointError(7,0.225,0.225,0.009724879,0.009600768);
   grae->SetPoint(8,1.3,0.8480721);
   grae->SetPointError(8,0.25,0.25,0.007104382,0.006846615);
   grae->SetPoint(9,1.825,0.8652839);
   grae->SetPointError(9,0.275,0.275,0.006625202,0.006361803);
   grae->SetPoint(10,2.3,0.69287);
   grae->SetPointError(10,0.2,0.2,0.01120069,0.01097493);
   grae->Draw("pe ");
   
   TLegend *leg = new TLegend(4.498962e-320,5.484129e-320,4.498962e-320,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","#epsilon_{rec}","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph1","#epsilon_{rec}#epsilon_{sel}(isolation)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph2","#epsilon_{rec}#epsilon_{sel}(Z veto)","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph3","#epsilon_{rec}#epsilon_{sel}#epsilon_{trig}","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   cPosA_cent2->Modified();
   cPosA_cent2->cd();
   cPosA_cent2->SetSelected(cPosA_cent2);
}
